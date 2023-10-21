#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_number(int n);
#endif
