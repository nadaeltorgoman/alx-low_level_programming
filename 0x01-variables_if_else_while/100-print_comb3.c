#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program that prints all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n == 9)
			break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
