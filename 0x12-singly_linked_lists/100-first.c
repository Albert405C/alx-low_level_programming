#include <stdio.h>

void print(void) __attribute__ ((constructor));

/**
 * print - Print a statement before main
 *         function is executed
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

