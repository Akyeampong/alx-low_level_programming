#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	char dnum1, dnum2;

	for (dnum1 = 0; dnum1 < 9; dnum1++)
	{
		for (dnum2 = dnum1 + 1; dnum2 < 10; dnum2++)
		{
			putchar((dnum1 % 10) + '0');
			putchar((dnum2 & 10) + '0');

			if (dnum1 == 8 && dnum2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
