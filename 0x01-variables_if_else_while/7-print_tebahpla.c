#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that prints the alphabet in lowercase in reverse.
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
