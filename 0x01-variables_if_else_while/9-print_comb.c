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
		if (x != 9)
		{
			putchar((x) +'0');

			putchar(',');
		}
		else 
		{
			putchar((x) +'0');
			
			putchar(' ');
		}

	return (0);
}
