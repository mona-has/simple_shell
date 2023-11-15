#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

char *_strdup(char *str);
void _execommand(char *ln, char **aray, ...);
char *_strcpy(char *dest, char *src);

#endif
