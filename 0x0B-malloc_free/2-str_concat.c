#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int len1 = 0, len2 = 0, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;

    while (s2[len2] != '\0')
        len2++;

    concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return (concatenated);
}

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = str_concat(s1, s2);

    if (result != NULL)
    {
        printf("%s\n", result);
        free(result); /* Don't forget to free the allocated memory when done. */
    }
    else
    {
        printf("Failed to allocate memory.\n");
    }

    return (0);
}


