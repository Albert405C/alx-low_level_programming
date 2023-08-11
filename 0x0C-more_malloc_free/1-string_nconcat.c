#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: number of bytes from string 2 to concatenate
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	/* Copy s1 to concatenated string */
	while (a < len1)
	{
		s[a] = s1[a];
		a++;
	}

	/* Copy n bytes from s2 to concatenated string */
	while (n && s2[b])
	{
		s[a] = s2[b];
		a++;
		b++;
		n--;
	}

	/* Null-terminate the concatenated string */
	s[a] = '\0';

	return (s);
}

