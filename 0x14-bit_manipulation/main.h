#ifndef _MAIN_h
#define _MAIN_h

#include <stddef.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
int is_base_binary(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif
