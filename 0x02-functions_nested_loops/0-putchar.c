#include <unistd.h>
#include "main.h"

/**
 * main - Prints "_putchar" followed by a line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
