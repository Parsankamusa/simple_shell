#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>
#include <unistd.h>
extern int errno;
extern char **environ;

/**
* struct dir_s - singly linked list
* @dir: malloc'd string that holds directory
* @next: points to the next node
*
* Description: singly linked list node structure for holding
* PATH directories
*/

typedef struct dir_s
{
	char *dir;
	struct dir_s *next;
} dir_s;

int new_env(const char *name, const char *value);
char *_strcpy(char *dest, const char *src);
int echo_check(char *command[]);
int _setenv(const char *name, const char *value, int overwrite);
int cd_check(char *command[]);
int _strlen(const char *s);
char *get_delim(struct dir_s *head, char *dir_slash, char *str, int *s_p);
void add_new_node(struct dir_s **head, char *mybuf);
int checks(char *command[], int *s_p, char *buf, int *f_t, int *ln, char **av);
void line_token(char *lines[], char *term_buffer);
char *_strtok(char *str, const char *delim);
void free_list(dir_s *head);
void word_token(char *command[], char *str);
int env_check(char *command[]);
void check_exit(char *command[], char *buffer, int *from_terminal);
void reset(int *i, int *j, int *env_print);
void execute(char *command[], char **argv);
int piped_in(char *lines[], char *buffer);
char *_strncat(char *dest, const char *src, int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *search_path(char *str, int *searched_path);
char *_getenv(const char *name);
int _strcmp(const char *s1, const char *s2);
void _env(void);
int _atoi(char *str);
int _setenv(const char *name, const char *value, int overwrite);
char *_itoa(int num);
#endif /* HOLBERTON_H */
