#include "lists.h"
#include <stdio.h>

/**

* listint_len - returns the number of elements in a linked listint_t list.
* @h: pointer to the head of linked list
*
* Return: number of elements in a linked listint_t list
*/

size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	while (h != NULL)
	{
		nd++;
		h = h->next;
	}
	return (nd);

}
