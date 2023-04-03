#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in the linked list
 * @head: Pointer to pointer to the head of the linked list
 * @idx: Index where new node should be inserted which starts at 0
 * @n: integer to be stored in the new node
 *
 * Return: Address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp_node;
	unsigned int i = 0;

	tmp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	while (tmp_node && i < idx - 1)
	{
	tmp_node = tmp_node->next;
	i++;
	}

	if (!tmp_node || i != idx - 1)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = tmp_node->next;
	tmp_node->next = new_node;

	return (new_node);
}
