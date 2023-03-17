#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
