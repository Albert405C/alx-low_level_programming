#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A pointer to the function used to print the name.
 *
 * Description: This function takes a name and a function pointer as arguments,
 * and then uses the function pointer to print the provided name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

