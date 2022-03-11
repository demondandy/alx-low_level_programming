#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program will assign random numbers to n.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negavtive\n", n);

	return (0);
}
