#include "main.h"
void print_most_numbers(void);

/**
*print_most_numbers - Prints absolute value of number.
*@n: paraameter to be retuned
*_putchar: 0 if successful otherwise 1.
*/

void print_most_numbers(void)
{
	/* prints the numbers 0 to 9 except 2 and 4*/
	char n = '0';
	
	while (n < '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	n++;
	}
	_putchar('\n');
}
