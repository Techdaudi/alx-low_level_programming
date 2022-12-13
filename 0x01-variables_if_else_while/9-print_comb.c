#include <stdio.h>

/**
 * main - Prints combination of single digit numbers.
 * Return: Returns o if successful 1 otherwise.
 */

int main(void)
{
	/*Prints combination of single digit numbers*/
	int x;

	for (x = 0; x <= 9; ++x)
		{
			putchar((x) + '0');

			if (x == 9)
				continue;

			putchar(',');

			putchar(' ');
		}

	putchar('\n');

	return (0);
}
