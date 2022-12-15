#include "main.h"
int print_sign(int n);

/**
*print_sign - Calls the function  print_alphabet.
* @n: parameter to be retuned
*Return 0 if successful otherwise 1.
*/

int print_sign(int n)
{
	/*Prints sign of a number*/
	if (n > 0)
	{
		return (1);
		_putchar('+' + '0');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0' + '0');
	}
	else
	{
		return (-1);
		_putchar('-1' + '0');
	}
	_putchar('\n');
}
