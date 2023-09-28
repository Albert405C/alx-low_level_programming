#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: string containing binary number (0 and 1 characters).
 *
 * Return: The converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    int index;
    unsigned int result = 0;

    if (!b)
        return (0);

    for (index = 0; b[index]; index++)
    {
        if (b[index] < '0' || b[index] > '1')
            return (0);
        result = 2 * result + (b[index] - '0');
    }

    return (result);
}

