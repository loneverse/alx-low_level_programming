#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first head node in the list
 * @idx: index of listint_l where new node will insert
 * @n: value for new node
 *
 * Return: pointer to address the new node Else NULL if error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *f, *y;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		f = *head;
		for (node = 0; node < idx - 1 && f != NULL; node++)
		{
			f = f->next;
		}
		if (f == NULL)
			return (NULL);
	}
	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);
	y->n = n;
	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}
	y->next = f->next;
	f->next = y;
	return (y);
}
