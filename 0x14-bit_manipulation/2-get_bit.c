#include "main.h"

/**
 * get_bit - Returns the value of a bit.
 * @n: The decimal number.
 * @index: The index of the bit.
 *
 * Return: The bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
