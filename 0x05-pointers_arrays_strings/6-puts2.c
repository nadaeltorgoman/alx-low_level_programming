#include "main.h"

/**
 * puts2 - prints one char and skip one of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
