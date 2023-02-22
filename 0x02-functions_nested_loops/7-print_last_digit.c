#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: testing character
 *
 * Return - returns the last digit of the integer i
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
