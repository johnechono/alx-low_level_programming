#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - will Print all the elements of a dlistint_t list.
 * @h: head of the list.
 * Return: number of nodes in the list.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		j++;
	}
	return (j);
}

