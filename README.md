<p align="center">
<img src="https://cdn.shopify.com/s/files/1/0204/4104/products/20180517-20180517-P1260614_600x.jpg?v=1528506358">
</p>

# :shell: Simple Shell

### Description ###
Custom made UNIX command line interpreter resembling UNIX shell in C.

![C logo](https://seeklogo.com/images/C/c-programming-language-logo-9B32D017B1-seeklogo.com.png)

## Features
* Implement the `setenv` and `unsetenv` builtin commands
* Handle the `exit` builtin
* Handle command lines with arguments
* Handle `Ctrl+C`

### Allowed functions 
* `access (man 2 access)`
* `chdir (man 2 chdir)</li>`
* `close (man 2 close)`
* `closedir (man 3 closedir)`
* `execve (man 2 execve)`
* `exit (man 3 exit)`
* `fflush (man 3 fflush)`
* `fork (man 2 fork)`
* `free (man 3 free)`
* `getcwd (man 3 free)`
* `getline (man 3 getline)`
* `isatty (man 3 isatty)`
* `kill (man 2 kill)`
* `malloc (man 3 malloc)`
* `open (man 2 open)`
* `opendir (man 3 opendir)`
* `perror (man 3 perror)`
* `read (man 2 read)`
* `readdir (man 3 readdir)`
* `signal (man 2 signal)`
* `lstat (__lxstat) (man 2 lstat)`
* `fstat (__fxstat) (man 2 fstat)`
* `strtok (man 3 strtok)`
* `wait (man 2 wait)`
* `waitpid (man 2 waitpid)`
* `wait3 (man 2 wait3)`
* `wait4 (man 2 wait4)`
* `write (man 2 write)`

## Installation

````

Clone repository into a new directory

````
$ https://github.com/Ken-Mens/simple_shell.git
````
Compile with following command:
````

````
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
````

## Notes
This shell does not handle alias, comments, help, or variables.

## Known Bugs
Currently no known bugs.


<a href="url" alt="Holberton logo"><img src="https://lh4.googleusercontent.com/yUzaviDgzDIq4-ZHp9k0YU5fsz0nOdekNRt1qHgp7Qdlw5BNfe6bETEf5ZWd-Vkn_m57BPx7HcDrwFK41ptLnQLTNipWmTAtiQwZL_8s97Nkzn94xP7XVKb3RnV0fx8QEZoxlkVd" width="350"></a>

As part of a Holberton School curriculum.
