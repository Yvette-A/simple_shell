#ifndef OUR_SHELL_H
#define OUR_SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>

int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, const char *src);
char *_strdup(const char *s);
char *_strchr(char *s, char ch);
void _puts(const char *s);
int _strncmp(char *s1, char *s2, int n);
int my_putchar(char c);
