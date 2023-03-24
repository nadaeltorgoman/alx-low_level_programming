#include "main.h"

/**
 * print_line - print a straight line of _
 *
 * @n: the number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	while (n--)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
}
