
with open("syscallent.h", 'r') as file:
    lines = file.readlines()

count = 0
for i in range(len(lines)):
    print lines[i]

    temp = lines[i].rstrip().split(',')
    for j in range(len(temp[3])):
        if(temp[3][j] == '"'):
            syscall = temp[3][j]
            j += 1
            while(temp[3][j] != '"'):
                syscall += temp[3][j]
                j += 1
            syscall += temp[3][j]
            j += 1
            break
    new_line = "{" + syscall + ", 0},\n"
    count += 1
    print new_line
    lines[i] = new_line

with open("flag_struct.h", 'w') as file:
    file.writelines( lines )

            
