#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index- will delete node at the given index
 * @head: the pointer to the list
 * @index: the index of the node to be deleted
 * Return: 1 if success, -1 if failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int j;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp1);
		return (1);
	}
	temp1 = *head;
	j = 0;
	while (temp1 != NULL)
	{
		if (j == index - 1)
		{
			temp2 = temp1->next;
			temp1->next = temp1->next->next;
			if (temp1->next != NULL)
				temp1->next->prev = temp1;
			free(temp2);
			return (1);
		}
		temp1 = temp1->next;
		j++;
	}
	return (-1);
	return (1);
}
