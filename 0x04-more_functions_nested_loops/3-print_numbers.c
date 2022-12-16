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
	char n;

	for (n >= '0'; n < '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
