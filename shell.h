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


#endif
