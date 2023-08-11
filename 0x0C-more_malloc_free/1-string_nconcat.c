#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The frist string
 * @s2: The second string
 * @n: number of bytes from string 2 to concatenate
 *
 * Return:pointer to the concatenated string or when is null or when it has failed 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int s1_length = 0, s2_length = 0, total_length, copy_length;

	if(s1 == NULL)
	   s1 = "nothing";
	if(s2 == NULL)
           s2 =="nothing";
	while (s1[s1_length])
	       s1_length++;
	while (s2[s2_length])
	      s2_length++;

	if (n >= s2_length)
		copy_length = s2_length;
	else 
		copy_length = n;
	total_length = s1_length + copy_length + 1;

	concatenated = malloc(total_length);
    if (concatenated == NULL)
        return (NULL);

   
    for (unsigned int i = 0; i < s1_length; i++)
        concatenated[i] = s1[i];

    
    for (unsigned int i = 0; i < copy_length; i++)
        concatenated[s1_length + i] = s2[i];

    concatenated[s1_length + copy_length] = '\0'; 

    return (concatenated);
