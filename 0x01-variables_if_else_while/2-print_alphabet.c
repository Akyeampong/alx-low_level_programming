#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabets from a to z
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	return (0);
}
