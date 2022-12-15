#include "main.h"
int _islower(int c);

/**
*_islower - Calls the function  print_alphabet.
*@c: value to be returned.
*Return 0 if successful otherwise 0.
*/

int _islower(int c)
{
	/*Checks if character is lower case*/
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
}
