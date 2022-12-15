#include "main.h"
int _abs(int);

/**
*_abs - Prints absolute valu of number.
* @n: parameter to be retuned
*return: 0 if successful otherwise 1.
*/

int _abs(int n)
{
	/*Prints absolute value of a number*/
	
	if (n < 0)
	{
		_putchar(-n);
	}
	else
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
