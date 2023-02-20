#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int dnuma, dnum;

	for (dnuma = 0; dnuma < 9; dnuma++)
	{
		for (dnum = dnuma + 1; dnum < 10; dnum++)
		{
			if (dnuma != dnum)
			{
				putchar((dnuma % 10) + '0');
				putchar((dnum % 10) + '0');

			if (dnuma == 8 && dnum == 9)
				continue;

			putchar(',');
			putchar(' ');	
			}
		}
	}

	putchar('\n');

	return (0);
}
