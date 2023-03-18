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

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (o = m + 1; o < 10; o++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if (n == 7)
				break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
