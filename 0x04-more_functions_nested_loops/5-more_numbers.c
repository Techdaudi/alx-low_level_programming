#include "main.h"
void more_numbers(void);

/**
*print_most_numbers - Prints absolute value of number.
*@c: variable 1
*@n: variable 2
*Return: 0 if successful otherwise 1.
*/

void more_numbers(void);
{
	/* prints 10 times the numbers 0 to 14*/
	char c = '0';
	int n = 1;

	while (n <= 10)
	{
		while (c <= '14')
			_putchar(c);
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
