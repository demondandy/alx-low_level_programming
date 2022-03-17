#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, p, fp = 612852475143;

	i = 2;

	while (i <= 612852475143 && fp > 1)
	{
		p = i;
		if ((fp % p) == 0)
			fp = fp / p;

		else
			i++;
	}
	printf("%ld\n", p);

	return (0);
}
