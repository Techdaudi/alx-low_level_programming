#include "main.h"
void print_square(int size);

/**
*print_square - function to print squre using #.
*@size: variable 1
*Return: 0 if successful otherwise 1.
*/

void print_square(int size)
{
	/* prints square*/
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			b = 0;
			a++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
