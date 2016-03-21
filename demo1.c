#include<syscall.h>
#include<errno.h>
#include<string.h>
#include<stdio.h>
#include<sys/ptrace.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/user.h>
#include<stdlib.h>
#include<time.h>

#include "flag_struct.h"

#define ORIG_RAX 15
#define SYSCALL_MAXARGS 6
#define RDI 14

int main(int argc, char* argv[])
{
    //**********declarations and memory allocations**********//
    long sys_call_number, temp_long;
    int status, i, j, x, in_syscall = 0, execute_syscall = 1;

    struct user_regs_struct regs;

    pid_t proc;

    i = 1;
    while(i < argc)
    {
        switch(argv[i][1])
        {
            char* p;
            case('p'):
                proc = atoi(argv[++i]);
                break;
            case('f'):
                for (p = strtok(argv[++i], ","); p != NULL; p = strtok(NULL, ","))
                    for(x = 0; x < sizeof(syscall_flag)/sizeof(syscall_flag[0]); x++)
                        //printf("%d  %s  %d\n", x, syscall_flag[x].sys_call, syscall_flag[x].flag);
                        if(!strcmp(syscall_flag[x].sys_call, p))
                            syscall_flag[x].flag = 1;
                break;
            default:
                printf("%c is not a valid option", argv[i][1]);
                return EXIT_SUCCESS;
        }
        i++;
    }

    /*
    printf("%d\n", proc);
    for(i = 0; i < sizeof(syscall_flag)/sizeof(syscall_flag[0]); i++)
        if(syscall_flag[i].flag == 1)
            printf("%s  %d\n", syscall_flag[i].sys_call, syscall_flag[i].flag);
    */
    srand(time(NULL));

    ptrace(PTRACE_ATTACH, proc, NULL, NULL);

    //**********starting the trace process**********//

    //The system call number used in switch() case to determine particular system calls// 
    while(1)
    {
        wait(&status);
        if(WIFEXITED(status))
        {
            printf("****Process exited****\n");
            break;
        }
        ptrace(PTRACE_GETREGS, proc, NULL, &regs);
        sys_call_number = regs.orig_rax;

        if(in_syscall == 0)
        {
            if((rand() % 100) > 50)  // failing 50% of the times
                execute_syscall = 0;
        }

        if(syscall_flag[sys_call_number].flag == 1 && execute_syscall == 1)
        {
            switch(sys_call_number)
            {
                case 0:
                    printf("%s  %d\n", syscall_flag[sys_call_number].sys_call, syscall_flag[sys_call_number].flag);
                    if(in_syscall == 0)
                    {
                        printf("entering\n");
                        temp_long = 0;
                        ptrace(PTRACE_POKEDATA, proc, regs.rdi , &temp_long);
                        j = 0;
                        while( j < (regs.rdx/8) )
                        {
                            ptrace(PTRACE_POKEDATA, proc, regs.rsi + (j * sizeof(long)) , &temp_long);
                            ++j;
                        }
                    }
                    else
                    {
                        printf("exiting\n");
                        printf("original return %ld\n", regs.rax);

                        regs.rax = -1;
                        ptrace(PTRACE_SETREGS, proc, NULL, &regs);
                    }
                    break;
                case 1:
                        temp_long = 0;
                        ptrace(PTRACE_POKEDATA, proc, regs.rdi , &temp_long);
                        j = 0;
                        while( j < (regs.rdx/8) )
                        {
                            ptrace(PTRACE_POKEDATA, proc, regs.rsi + (j*8) , &temp_long);
                            ++j;
                        }
                    break;
            }
        }
        in_syscall ^= 1;
        if(in_syscall == 0)
            execute_syscall = 1;
        ptrace(PTRACE_SYSCALL, proc, NULL, NULL);
    }
    return 0;
}