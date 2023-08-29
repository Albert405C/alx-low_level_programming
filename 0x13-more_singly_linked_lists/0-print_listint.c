#include "lists.h"

/**
 * print_listint - prints the elements of the linked list
 * @h: linked list to print
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

