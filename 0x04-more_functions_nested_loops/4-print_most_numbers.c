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
	int n;
	
	for (n = 0; n <= 9; ++n)
	{
		if (n =! 2 || n != 4)
		{
			_putchar((n%10) + '0');
		}
	}
	_putchar('\n');
}
