#include "lists.h"
/**
 * dlistint_len - will return number of elements in a dlistint_t list.
 * @h: head of the dlistint_t list.
 * Return: number of elements in the list.
 * Description: will return the number of elements in a dlistint_t
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		j++;
	}
	return (j);
}

