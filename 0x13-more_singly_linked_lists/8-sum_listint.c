#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of listint_t in the linked list.
 * @head: pointer to the first node
 *
 * Return: sum of all the data created
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
