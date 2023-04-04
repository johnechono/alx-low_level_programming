#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list
 * @head: the head of the linked list
 * Return: the address of the node where the loop starts,
 * return NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat;
	listint_t  *rat;

	if (head == NULL || head->next == NULL)
	return (NULL);

	cat = head->next;
	rat = head->next->next;

	while (rat != NULL && rat->next != NULL)
	{
	if (cat == rat)
	{
	cat = head;

	while (cat != rat)
	{
	cat = cat->next;
	rat = rat->next;
	}

	return (cat);
	}

	cat = cat->next;
	rat = rat->next->next;
	}

	return (NULL);
}
