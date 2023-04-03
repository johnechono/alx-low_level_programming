#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer of type listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_number = 0;

	while (h)
	{
		node_number++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_number);
}
