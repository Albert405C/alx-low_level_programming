#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc function
 * @b: number of bytes to allocated
 *
 * Return: a pointer is returned to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
