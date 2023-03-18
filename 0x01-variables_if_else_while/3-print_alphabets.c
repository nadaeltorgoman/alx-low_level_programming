#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program prints the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (char c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
