#include "main.h"
void more_numbers(void);

/**
*print_most_numbers - Prints absolute value of number.
*@c: variable 1
*@n: variable 2
*Return: 0 if successful otherwise 1.
*/

void more_numbers(void)
{
	/* prints 10 times the numbers 0 to 14*/
	int n1 = 0;
	int n2 = 0;

	while (n1 <= 9)
	{
		while (n2 <= 14)
		{
			if (2 >= 10)
			{
				_putchar(n2 / 10 + '0');
			_putchar(n2 % 10 + '0');
			n1++;
			}
		}
	_putchar('\n');
	n1++;
	n1 = 0;
	}
}
