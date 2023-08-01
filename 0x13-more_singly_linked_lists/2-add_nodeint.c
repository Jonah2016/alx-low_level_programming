#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add a node at beginning of a listint_t list.
  *
  * @head: head of the double pointer
  * @n: int add the list
  * Return: a NULL value if the function failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
