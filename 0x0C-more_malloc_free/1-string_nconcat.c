#include "main.h"

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;
    unsigned int a = 0, b = 0, c = 0;

    if (s1 == NULL)
    {
        a = 0;
    }
    else
    {
        while (s1[a])
            a++;
    }
    if (s2 == NULL)
    {
        b = 0;
    }
    else
    {
        while (s2[b])
            b++;
    }
    if (b > n)
        b = n;

    s = malloc(sizeof(char) * (a + b + 1));
    if (s == NULL)
        return (NULL);

    for (c = 0; c < a; c++)
        s[c] = s1[c];
    for (c = 0; c < b; c++)
        s[c + a] = s2[c];

    s[a + b] = '\0';
    return (s);
}
