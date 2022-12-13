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
		for (y = 0; y <= 9; ++y)
		{
			for (z = 0; z <= 10; ++z)
				if (x != y && y != z && z != x)
				{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
					putchar(',');
					putchar(' ');
				}
		}
	}
	
	return (0);
}
