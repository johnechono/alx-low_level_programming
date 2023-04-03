#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         if not then return tthe head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int fig;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	fig = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (fig);
}
