#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: address to the new node else NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start, *last;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = NULL;

	if (*head == NULL)
		*head = start;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = start;
	}

	return (*head);
}
