#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the no of elements in a list
 * @h: Pointer to the list
 *
 * Return: Number of elements in the list 'h'
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

