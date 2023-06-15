#include "lists.h"

/**
 * add_dnodeint - will add new node at the beginning of the dlistint_t list.
 * @head: pointer to the head of the dlistint_t.
 * @n: integer for the new node
 * Return: If it fails - NULL. O/W - the address of the new node.
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
