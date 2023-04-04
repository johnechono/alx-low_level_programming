#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat;
	const listint_t *rat;
	size_t n;

	n = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	cat = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (cat == rat)
		{
			cat = head;
			while (cat != rat)
			{
				n++;
				cat = cat->next;
				rat = rat->next;
			}

			cat = cat->next;
			while (cat != rat)
			{
				n++;
				cat = cat->next;
			}

			return (n);
		}

		cat = cat->next;
		rat = (rat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, index = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
