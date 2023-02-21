#include "main.h"
/**
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int newline = 0;
	char lc;

	while (newline <= 9)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
		newline++;
	}
}
