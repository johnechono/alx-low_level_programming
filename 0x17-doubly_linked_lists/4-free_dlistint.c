#include "lists.h"
/**
 * free_dlistint - will frees the doubly linked list
 * @head: pointer to the list to be freed
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
