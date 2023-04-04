#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: head of list to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    // Initialize a counter variable to count the number of elements in the list
    size_t nodes = 0;

    // Traverse the list until the end is reached (h == NULL)
    while (h != NULL)
    {
        // Print the integer value of the current node to the standard output
        printf("%d\n", h->n);

        // Move to the next node in the list
        h = h->next;

        // Increment the counter variable to keep track of the number of nodes processed
        nodes++;
    }

    // Return the number of nodes processed
    return (nodes);
}

