#include <main.h>

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8; /* assuming 8 bits per byte */
	unsigned long int mask = (unsigned long int)1 << (bit_count - 1); /* start with the most significant bit */
	int bit;

	for (int i = 0; i < bit_count; i++)
	{
		bit = !!(n & mask); /* test if the i-th bit is set */
		putchar('0' + bit); /* print '0' or '1' */
		mask >>= 1; /* shift the mask to the next bit */
	}
	putchar('\n');
}
