#include "lists.h"
/**
 * sum_dlistint - will sum the values of all nodes in a dlistint_t list
 * @head: a pointer to the head of the list
 * Return: 0 if it is an empty list
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
