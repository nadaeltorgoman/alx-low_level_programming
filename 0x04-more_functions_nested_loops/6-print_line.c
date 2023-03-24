#include "main.h"

/**
 * print_line - print a straight line of _
 *
 * @n: the number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
