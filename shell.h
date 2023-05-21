#ifndef HEADER_H
#define HEADER_H

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
char _strcpy(char *dest, char *src, int n);
int _strlen(char *s);
int _atoi(char *s);
char _strcpy(char *dest, char *src);
char _strcat(char *dest, char *src);
char _strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
char _strdup(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
char _itoa(unsigned int n);
void array_rev(char *arr, int len);
int intlen(int num);

/** memory **/
char _memcpy(char *dest, char *src, unsigned int n);
void _realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_all(char **cmd, char *line);
void fill_an_array(void *a, int el, unsigned int len);
void _calloc(unsigned int size);

/** input func **/
char _getline();
char enter(char *string);
char space(char *str);
void hashtag_handler(char *buff);
void prompt(void);
char _strtok(char *str, const char *delim);
unsigned int check_delim(char c, const char *str);


#endif
