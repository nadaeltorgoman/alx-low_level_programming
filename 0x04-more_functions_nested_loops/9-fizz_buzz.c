#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
