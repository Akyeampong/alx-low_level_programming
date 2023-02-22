#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase, followed by a line.
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char a;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
