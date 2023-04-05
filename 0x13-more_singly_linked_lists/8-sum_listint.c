/**
 * sum_listint - adds the sum of all the data (n) of a listint_t linked list
 * @head: the pointer to the head of the linked list
 * Return: sum, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}

