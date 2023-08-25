#include <stdlib.h>
#include "lists.h"

/**
 * count_list_elements - Determines the count of elements in a linked list
 * @h: Pointer to the list_t list
 *
 * Return: Count of elements within 'h'
 */
size_t count_list_elements(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

