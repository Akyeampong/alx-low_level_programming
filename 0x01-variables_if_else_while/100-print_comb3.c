#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int dnum1, dnum;

	for (dnum1 = 0; dnum1 < 9; dnum1++)
	{
		for (dnum = dnum1 + 1; dnum < 10; dnum++)
		{
			putchar((dnum1 % 10) + '0');
			putchar((dnum & 10) + '0');

			if (dnum1 == 8 && dnum == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
