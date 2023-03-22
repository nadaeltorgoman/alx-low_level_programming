#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int s, s3, s5;
	int i;

	s = 0;
	s3 = 0;
	s5 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			s3 = s3 + i;
		} else if ((i % 5) == 0)
		{
			s5 = s5 + i;
		}
	}
	s = s3 + s5;
	printf("%lu\n", s);
	return (0);
}
