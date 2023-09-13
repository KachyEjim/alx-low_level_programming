#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: the name
 * @f: name of function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
