#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of doubly linked list
 * @head: the pointer to the list
 * @index: the index of the node
 * Return: the address of the node, or NULL if it doesn't exist
 *
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int j;

	temp = head;
	j = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		if (j == index)
		{
			return (temp);
		}
		temp = temp->next;
		j++;
	}
	return (NULL);
}
