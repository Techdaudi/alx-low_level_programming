#include "main.h"
void print_line(int n);

/**
*print_line - Prints absolute value of number.
*@n: variable 1
*Return: 0 if successful otherwise 1.
*/

void print_line(int n)
{
	/* prints underscore n times*/
	int m;
	
	for (m = 1; m <= n; ++m)
	{
		if (m <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
