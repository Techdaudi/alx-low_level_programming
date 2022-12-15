#include "main.h"
void print_numbers(void);

/**
*mul - Prints absolute valu of number.
* @a: parameter to be retuned
* @b: parameter to be retuned
*return: 0 if successful otherwise 1.
*/

void print_numbers(void);
{
	/* prints the numbers, from 0 to 9*/
	int n;

	for (n = 0; n <= 9; ++n)
	{
		_putchar((n%10) + '0');
	}
	_putchar('\n');
}
