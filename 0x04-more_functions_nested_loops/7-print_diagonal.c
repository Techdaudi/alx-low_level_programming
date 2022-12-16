#include "main.h"
void print_diagonal(int n);

/**
*print_diagonal - function to print diagonal line.
*@n: variable 1
*Return: 0 if successful otherwise 1.
*/

void print_diagonal(int n)
{
	/* prints diagonal line*/
	int x = 0;
	int y = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
