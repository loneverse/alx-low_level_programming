#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the beginning of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
