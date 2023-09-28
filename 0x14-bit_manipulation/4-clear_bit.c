#include "main.h"

/**
 * clear_bit - Clears the value of a specified bit
 * @n: Pointer to the number
 * @index: Index of the bit 
 *
 * Return: 1 for success, 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

