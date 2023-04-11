#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the number to be modified
 * @index: The index of the bit to be modified, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}

