#include <stdlib.h>
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
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < len2 && i < (len1 + n))
		s[a++] = s2[b++];

	while (n >= len2 && i < (len1 + len2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}

