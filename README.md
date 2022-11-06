# 0x16. C - Simple Shell
---
## Compilation
''' gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh '''

## Testing
---
**In interactive mode**
'''
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
'''
---
**In non-interactive mode**
'''
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
'''
