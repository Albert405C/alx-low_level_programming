#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a character.
 * @c: Character to print.
 */
void print_char(char *c)
{
    putchar(*c);
}

/**
 * print_dash - Prints a dash.
 * @c: Character (ignored).
 */

/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
    char name[] = "John";

    printf("Printing name using print_char: ");
    print_name(name, print_char);

    return (0);
}

