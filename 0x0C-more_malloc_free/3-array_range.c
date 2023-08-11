#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a specified range.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range (inclusive).
 *
 * Return: Pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}

