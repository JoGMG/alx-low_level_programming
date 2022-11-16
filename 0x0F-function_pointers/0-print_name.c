#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name given
 * @f: function of name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && name != NULL)

		f(name);
}
