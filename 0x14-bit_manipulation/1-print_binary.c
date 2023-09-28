#include "main.h"

/**
 * print_binary - Prints the binary
 * @n: The decimal number to print
 */
void print_binary(unsigned long int n)
{
	int i, non_zero = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;

		if (mask & 1)
		{
			_putchar('1');
			non_zero++;
		}
		else if (non_zero)
			_putchar('0');
	}
	if (!non_zero)
		_putchar('0');
}

