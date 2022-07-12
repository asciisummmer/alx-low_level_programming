#include "function_pointers.h"

/**
* print_name - display string with pointer to function
* @name: string to print
* @f: pointer to function
* Return: Nothing.
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
