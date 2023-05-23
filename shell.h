#ifndef SHELL_H
#define SHELL_H

#define PRINT(c) (write(STDERR_FILENO, c, _strlen(c)))
#define BUFSIZE 10240
#define DELIMITER " \t\r\n\a"

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>

/** String **/
int _putchar(char c);
void _puts(char *str);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
char *_itoa(unsigned int n);
void array_rev(char *arr, int len);
int intlen(int num);

/** memory **/
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_all(char **cmd, char *line);
void *fill_an_array(void *a, int el, unsigned int len);
void *_calloc(unsigned int size);

/** input func **/
char *_getline();
char *enter(char *string);
char *space(char *str);
void hashtag_handler(char *buff);
void prompt(void);
char *_strtok(char *str, const char *delim);
unsigned int check_delim(char c, const char *str);
int history(char *input);
char **separator(char *input);

/** files args **/
void read_file(char *file, char **argv);
void treat_file(char *line, int count, FILE *fp, char **argv);
void exit_bul_for_file(char **cmd, char *line, FILE *fd);

/** cmd parser **/
char **parse_cmd(char *input);
int check_cmd(char **cmd, char *input, int c, char **argv);
void signal_to_handle(int sig);

/** error **/
void print_error(char *input, int counter, char **argv);
void _prerror(char **argv, int c, char **cmd);
void error_file(char **argv, int c);

/** enviroment **/
extern char **environ;
void create_envi(char **envi);
void free_env(char **env);

/** print **/
void print_number(unsigned int n);
void print_number_int(int n);
int print_echo(char **cmd);

/** path **/
int path_cmd(char **cmd);
char *build(char *token, char *value);
char *_getenv(char *name);

/** builtin **/
void help_all(void);
void help_alias(void);
void help_cd(void);
void help_exit(void);
void help_help(void);
void help_env(void);
void help_setenv(void);
void help_unsetenv(void);
int display_help(char **cmd, __attribute__((unused))int st);

#endif
