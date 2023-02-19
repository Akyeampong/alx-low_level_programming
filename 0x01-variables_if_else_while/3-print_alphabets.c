#include <stdio.h>

/**
 * main - Prints lower and uppercase alphabets
 *
 * Return: Always 0.
 */

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);

	for (let = 'A'; let <= 'Z'; let++)
                putchar(let);

	putchar('\n');

	return (0);
}
