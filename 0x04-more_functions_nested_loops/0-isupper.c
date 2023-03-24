#include "main.h"

/**
 * _isupper - check if c upper or lower
 *
 * Description: A C program prints if c is upper
 * @c: input for alphabet
 *
 * Return: 1 if upper, 0 if lower
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
