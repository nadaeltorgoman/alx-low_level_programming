#include "main.h"

/**
 * _isdigit - check if n is digit (0 - 9) or not
 *
 * @n: input
 *
 * Return: 1 if it's digit, 0 if otherwise
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	else
		return (0);
}
