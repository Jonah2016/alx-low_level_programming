#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This releases the memory allocated for a list type
 *
 * @head: the pointer to the primary node of the list to be freed
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
