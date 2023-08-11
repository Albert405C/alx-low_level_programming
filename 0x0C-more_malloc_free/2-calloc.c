#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, initialized with zeros.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 *         If nmemb or size is 0, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    void *ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    
    char *byte_ptr = ptr;
    for (unsigned int i = 0; i < nmemb * size; i++)
    {
        byte_ptr[i] = 0;
    }

    return ptr;
}

