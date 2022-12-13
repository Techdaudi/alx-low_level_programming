#include <stdio.h>

/**
 * main - Prints combination of single digit numbers.
 * Return: Returns o if successful 1 otherwise.
 */

int main(void)
{
	/*Prints combination of single digit numbers*/
	int x, y, z;

	for (x = 0; x <= 9; ++x)
	{
		putchar((x) +'0');

		putchar(',');

		putchar(' ');

	}

	return (0);
}
