#include <stdio.h>

/**
 * main - prints alphebets in lower case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch++);
	}
	putchar('\');

	return (0);
}
