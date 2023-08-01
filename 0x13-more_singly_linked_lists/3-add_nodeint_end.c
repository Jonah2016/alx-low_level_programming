#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at the end of the listint_t list.
  *
  * @head: the head of the double pointer created
  * @n: int add the list
  * Return: NULL value if the function fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
