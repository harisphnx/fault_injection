struct flag_struct
{
    char* sys_call;
    short flag;
};

struct flag_struct syscall_flag[] = {
{"restart_syscall", 0},
{"exit", 0},
{"fork", 0},
{"read", 0},
{"write", 0},
{"open", 0},
{"close", 0},
{"waitpid", 0},
{"creat", 0},
{"link", 0},
{"unlink", 0},
{"execve", 0},
{"chdir", 0},
{"time", 0},
{"mknod", 0},
{"chmod", 0},
{"lchown16", 0},
{"stat", 0},
{"lseek", 0},
{"getpid", 0},
{"mount", 0},
{"oldumount", 0},
{"setuid16", 0},
{"getuid16", 0},
{"stime", 0},
{"ptrace", 0},
{"alarm", 0},
{"fstat", 0},
{"pause", 0},
{"utime", 0},
{"access", 0},
{"nice", 0},
{"sync", 0},
{"kill", 0},
{"rename", 0},
{"mkdir", 0},
{"rmdir", 0},
{"dup", 0},
{"pipe", 0},
{"times", 0},
{"brk", 0},
{"setgid16", 0},
{"getgid16", 0},
{"signal", 0},
{"geteuid16", 0},
{"getegid16", 0},
{"acct", 0},
{"umount", 0},
{"ioctl", 0},
{"fcntl", 0},
{"setpgid", 0},
{"olduname", 0},
{"umask", 0},
{"chroot", 0},
{"ustat", 0},
{"dup2", 0},
{"getppid", 0},
{"getpgrp", 0},
{"setsid", 0},
{"sigaction", 0},
{"sgetmask", 0},
{"ssetmask", 0},
{"setreuid16", 0},
{"setregid16", 0},
{"sigsuspend", 0},
{"sigpending", 0},
{"sethostname", 0},
{"setrlimit", 0},
{"old_getrlimit", 0},
{"getrusage", 0},
{"gettimeofday", 0},
{"settimeofday", 0},
{"getgroups16", 0},
{"setgroups16", 0},
{"old_select", 0},
{"symlink", 0},
{"lstat", 0},
{"readlink", 0},
{"uselib", 0},
{"swapon", 0},
{"reboot", 0},
{"old_readdir", 0},
{"old_mmap", 0},
{"munmap", 0},
{"truncate", 0},
{"ftruncate", 0},
{"fchmod", 0},
{"fchown16", 0},
{"getpriority", 0},
{"setpriority", 0},
{"statfs", 0},
{"fstatfs", 0},
{"ioperm", 0},
{"socketcall", 0},
{"syslog", 0},
{"setitimer", 0},
{"getitimer", 0},
{"newstat", 0},
{"newlstat", 0},
{"newfstat", 0},
{"uname", 0},
{"iopl", 0},
{"vhangup", 0},
{"vm86old", 0},
{"wait4", 0},
{"swapoff", 0},
{"sysinfo", 0},
{"ipc", 0},
{"fsync", 0},
{"sigreturn", 0},
{"clone", 0},
{"setdomainname", 0},
{"newuname", 0},
{"modify_ldt", 0},
{"adjtimex", 0},
{"mprotect", 0},
{"sigprocmask", 0},
{"init_module", 0},
{"delete_module", 0},
{"quotactl", 0},
{"getpgid", 0},
{"fchdir", 0},
{"bdflush", 0},
{"sysfs", 0},
{"personality", 0},
{"setfsuid16", 0},
{"setfsgid16", 0},
{"llseek", 0},
{"getdents", 0},
{"select", 0},
{"flock", 0},
{"msync", 0},
{"readv", 0},
{"writev", 0},
{"getsid", 0},
{"fdatasync", 0},
{"sysctl", 0},
{"mlock", 0},
{"munlock", 0},
{"mlockall", 0},
{"munlockall", 0},
{"sched_setparam", 0},
{"sched_getparam", 0},
{"sched_setscheduler", 0},
{"sched_getscheduler", 0},
{"sched_yield", 0},
{"sched_get_priority_max", 0},
{"sched_get_priority_min", 0},
{"sched_rr_get_interval", 0},
{"nanosleep", 0},
{"mremap", 0},
{"setresuid16", 0},
{"getresuid16", 0},
{"vm86", 0},
{"poll", 0},
{"setresgid16", 0},
{"getresgid16", 0},
{"prctl", 0},
{"rt_sigreturn", 0},
{"rt_sigaction", 0},
{"rt_sigprocmask", 0},
{"rt_sigpending", 0},
{"rt_sigtimedwait", 0},
{"rt_sigqueueinfo", 0},
{"rt_sigsuspend", 0},
{"pread64", 0},
{"pwrite64", 0},
{"chown16", 0},
{"getcwd", 0},
{"capget", 0},
{"capset", 0},
{"sigaltstack", 0},
{"sendfile", 0},
{"vfork", 0},
{"getrlimit", 0},
{"mmap_pgoff", 0},
{"truncate64", 0},
{"ftruncate64", 0},
{"stat64", 0},
{"lstat64", 0},
{"fstat64", 0},
{"lchown", 0},
{"getuid", 0},
{"getgid", 0},
{"geteuid", 0},
{"getegid", 0},
{"setreuid", 0},
{"setregid", 0},
{"getgroups", 0},
{"setgroups", 0},
{"fchown", 0},
{"setresuid", 0},
{"getresuid", 0},
{"setresgid", 0},
{"getresgid", 0},
{"chown", 0},
{"setuid", 0},
{"setgid", 0},
{"setfsuid", 0},
{"setfsgid", 0},
{"pivot_root", 0},
{"mincore", 0},
{"madvise", 0},
{"getdents64", 0},
{"fcntl64", 0},
{"gettid", 0},
{"readahead", 0},
{"setxattr", 0},
{"lsetxattr", 0},
{"fsetxattr", 0},
{"getxattr", 0},
{"lgetxattr", 0},
{"fgetxattr", 0},
{"listxattr", 0},
{"llistxattr", 0},
{"flistxattr", 0},
{"removexattr", 0},
{"lremovexattr", 0},
{"fremovexattr", 0},
{"tkill", 0},
{"sendfile64", 0},
{"futex", 0},
{"sched_setaffinity", 0},
{"sched_getaffinity", 0},
{"set_thread_area", 0},
{"get_thread_area", 0},
{"io_setup", 0},
{"io_destroy", 0},
{"io_getevents", 0},
{"io_submit", 0},
{"io_cancel", 0},
{"fadvise64", 0},
{"exit_group", 0},
{"lookup_dcookie", 0},
{"epoll_create", 0},
{"epoll_ctl", 0},
{"epoll_wait", 0},
{"remap_file_pages", 0},
{"set_tid_address", 0},
{"timer_create", 0},
{"timer_settime", 0},
{"timer_gettime", 0},
{"timer_getoverrun", 0},
{"timer_delete", 0},
{"clock_settime", 0},
{"clock_gettime", 0},
{"clock_getres", 0},
{"clock_nanosleep", 0},
{"statfs64", 0},
{"fstatfs64", 0},
{"tgkill", 0},
{"utimes", 0},
{"fadvise64_64", 0},
{"mbind", 0},
{"get_mempolicy", 0},
{"set_mempolicy", 0},
{"mq_open", 0},
{"mq_unlink", 0},
{"mq_timedsend", 0},
{"mq_timedreceive", 0},
{"mq_notify", 0},
{"mq_getsetattr", 0},
{"kexec_load", 0},
{"waitid", 0},
{"add_key", 0},
{"request_key", 0},
{"keyctl", 0},
{"ioprio_set", 0},
{"ioprio_get", 0},
{"inotify_init", 0},
{"inotify_add_watch", 0},
{"inotify_rm_watch", 0},
{"migrate_pages", 0},
{"openat", 0},
{"mkdirat", 0},
{"mknodat", 0},
{"fchownat", 0},
{"futimesat", 0},
{"fstatat64", 0},
{"unlinkat", 0},
{"renameat", 0},
{"linkat", 0},
{"symlinkat", 0},
{"readlinkat", 0},
{"fchmodat", 0},
{"faccessat", 0},
{"pselect6", 0},
{"ppoll", 0},
{"unshare", 0},
{"set_robust_list", 0},
{"get_robust_list", 0},
{"splice", 0},
{"sync_file_range", 0},
{"tee", 0},
{"vmsplice", 0},
{"move_pages", 0},
{"getcpu", 0},
{"epoll_pwait", 0},
{"utimensat", 0},
{"signalfd", 0},
{"timerfd_create", 0},
{"eventfd", 0},
{"fallocate", 0},
{"timerfd_settime", 0},
{"timerfd_gettime", 0},
{"signalfd4", 0},
{"eventfd2", 0},
{"epoll_create1", 0},
{"dup3", 0},
{"pipe2", 0},
{"inotify_init1", 0},
{"preadv", 0},
{"pwritev", 0},
{"rt_tgsigqueueinfo", 0},
{"perf_event_open", 0},
{"recvmmsg", 0},
{"fanotify_init", 0},
{"fanotify_mark", 0},
{"prlimit64", 0},
{"name_to_handle_at", 0},
{"open_by_handle_at", 0},
{"clock_adjtime", 0},
{"syncfs", 0},
{"sendmmsg", 0},
{"setns", 0},
{"process_vm_readv", 0},
{"process_vm_writev", 0},
{"kcmp", 0},
{"finit_module", 0}
};
