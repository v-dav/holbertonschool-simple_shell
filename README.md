![Holberton School logo](https://user-images.githubusercontent.com/120781178/229278297-98c6e4b7-f15f-4788-a893-15cb97f10351.png)

# :mortar_board: C - Simple Shell

Second group project at Holberton School : implement our own simplified version of a UNIX command line interpreter in C.


## Description :scroll:

The objective of this project is to create from scratch a simple UNIX command interpreter with limited functionality but applying the core concepts of a more robust shell. In simple words, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. It incorporates many features and generally executes other commands.

## Technologies & Tools :computer:


![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Markdown](https://img.shields.io/badge/Markdown-FCC624?style=for-the-badge&logo=markdown&logoColor=black)
![Ubuntu](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
![Git](https://img.shields.io/badge/git-%23121011.svg?style=for-the-badge&logo=git&logoColor=white)
![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Docker](https://img.shields.io/badge/docker-%230db7ed.svg?style=for-the-badge&logo=docker&logoColor=white)
![Brave](https://img.shields.io/badge/Brave-FB542B?style=for-the-badge&logo=Brave&logoColor=white)
![Google Chrome](https://img.shields.io/badge/Google%20Chrome-4285F4?style=for-the-badge&logo=GoogleChrome&logoColor=white)
![macOS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=macos&logoColor=F0F0F0)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![Trello](https://img.shields.io/badge/Trello-%23026AA7.svg?style=for-the-badge&logo=Trello&logoColor=white)

---

## Requirements :exclamation:
Installed gcc (GNU Compiler Collection) version 9.4.0 or newer.

---

### List of allowed functions and system calls+

-   all functions from strings.h
-   `access`  (man 2 access)
-   `chdir`  (man 2 chdir)
-   `close`  (man 2 close)
-   `closedir`  (man 3 closedir)
-   `execve`  (man 2 execve)
-   `exit`  (man 3 exit)
-   `_exit`  (man 2 _exit)
-   `fflush`  (man 3 fflush)
-   `fork`  (man 2 fork)
-   `free`  (man 3 free)
-   `getcwd`  (man 3 getcwd)
-   `getline`  (man 3 getline)
-   `getpid`  (man 2 getpid)
-   `isatty`  (man 3 isatty)
-   `kill`  (man 2 kill)
-   `malloc`  (man 3 malloc)
-   `open`  (man 2 open)
-   `opendir`  (man 3 opendir)
-   `perror`  (man 3 perror)
-   `printf`  (man 3 printf)
-   `fprintf`  (man 3 fprintf)
-   `vfprintf`  (man 3 vfprintf)
-   `sprintf`  (man 3 sprintf)
-   `putchar`  (man 3 putchar)
-   `read`  (man 2 read)
-   `readdir`  (man 3 readdir)
-   `signal`  (man 2 signal)
-   `stat`  (__xstat) (man 2 stat)
-   `lstat`  (__lxstat) (man 2 lstat)
-   `fstat`  (__fxstat) (man 2 fstat)
-   `strtok`  (man 3 strtok)
-   `wait`  (man 2 wait)
-   `waitpid`  (man 2 waitpid)
-   `wait3`  (man 2 wait3)
-   `wait4`  (man 2 wait4)
-   `write`  (man 2 write)

---

## Examples :hammer_and_wrench:
### Clone repository using HTTPS
```
git clone https://github.com/v-dav/holbertonschool-simple_shell.git
```

### Compilation
All the files will be compiled on Ubuntu 20.04 LTS using :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Testing

It works like this in interactive mode:

```
./hsh
/bin/ls
hsh main.c shell.c
exit
```
And like this in non-interactive mode:

```
echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
cat test_ls_2
/bin/ls
/bin/ls
cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
```

### Valgrind

root@id:/holbertonschool-simple_shell$ valgrind ./hsh
==23753== Memcheck, a memory error detector
==23753== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==23753== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==23753== Command: ./hsh
==23753== 
/bin/ls
README.md  _getline.c  _strtok.c          hsh     path_values.c   simple_shell.h
_free.c    _strfunc.c  execute_command.c  main.c  search_path1.c
==23753== 
==23753== HEAP SUMMARY:
==23753==     in use at exit: 0 bytes in 0 blocks
==23753==   total heap usage: 142 allocs, 142 frees, 18,486 bytes allocated
==23753== 
==23753== All heap blocks were freed -- no leaks are possible
==23753== 
==23753== For lists of detected and suppressed errors, rerun with: -s
==23753== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
root@id:/holbertonschool-simple_shell$

---
## Flowchart

## Authors
Written by :
* **[Vladimir Davidov](https://github.com/v-dav)**
* **[Hugo Castéras](https://github.com/hug0-cstrs)**
