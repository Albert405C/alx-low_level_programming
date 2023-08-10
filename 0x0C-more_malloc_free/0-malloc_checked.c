#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: shows the number of bytes to allocate
 *
 * return: the pointer to the allocated memory
 *
 * Exits with a return value of 98 if the malloc fails to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	   fprintf(stderr, "No Memory Allocated/n");
	   exit(98);
	}

	return(98);

       }

       return ptr;

}
