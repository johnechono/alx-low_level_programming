#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the head
 * @index: The index of the node to be deleted
 * Return: 1 if it succeeds and if it fails, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int node = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (node < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		node++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
