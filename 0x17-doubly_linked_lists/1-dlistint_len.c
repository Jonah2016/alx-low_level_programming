#include "lists.h"

/**
 * dlistint_len - returns the num of items in
 * a double linked list
 *
 * @h: head of the list
 * Return: total nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
