#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar((num % 10) + '0');

		if (num == 2 && num ==4)
			continue;
	}
	_putchar('\n');
}
