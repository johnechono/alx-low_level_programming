#include "lists.h"
/**
 * add_dnodeint_end - will add new node at the end of dlistint_t list.
 * @head: pointer to the head of dlistint_t list.
 * @n: integer for new node
 * Return: If it fails - NULL. O/W - address of the new node.
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
