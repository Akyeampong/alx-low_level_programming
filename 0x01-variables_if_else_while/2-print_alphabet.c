#include <stdio.h>

/**
 * main - Prints alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
		putchar(lo);

	putchar('\n');

	return (0);
}
