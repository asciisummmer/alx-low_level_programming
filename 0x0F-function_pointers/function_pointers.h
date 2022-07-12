#ifndef _POINTER
#define _POINTER
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void print_name(char *name, void (*f)(char *));
void put_str(char *str);
int _putchar(char c);

#endif
