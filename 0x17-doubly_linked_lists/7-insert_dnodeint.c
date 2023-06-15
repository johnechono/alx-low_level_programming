#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - will insert new node at a given place
 * @h: a pointer to the list
 * @idx: the index of the new node
 * @n: the value of the new node
 * Return: the node address, or NULL when it fails
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int j;

	if (h == NULL)
		return (NULL);
	temp = *h;
	j = 0;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (j == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			if (new->next != NULL)
				new->next->prev = new;
			return (new);
		}
		temp = temp->next;
		j++;
	}
	return (NULL);
}
