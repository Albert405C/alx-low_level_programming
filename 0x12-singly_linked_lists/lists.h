#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Defines a singly linked list structure
 * @str: A dynamically allocated string
 * @len: The length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: Defines a node structure for a singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function Prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */

