#include "main.h"
void print_numbers(void);

/**
*mul - Prints absolute valu of number.
*@n: parameter to be retuned
*_putchar: 0 if successful otherwise 1.
*/

void print_numbers(void);
{
	/* prints the numbers, from 0 to 9*/
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		++n;
	}
	_putchar('\n');
}
