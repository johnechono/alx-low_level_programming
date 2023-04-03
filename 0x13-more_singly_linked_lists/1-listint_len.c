#include "lists.h"

/**
 * listint_len - Returns the number of elements in the linked list.
 * @h: pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_number = 0;

	while (h)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}
