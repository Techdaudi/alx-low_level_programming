#include "main.h"
int _isalpha(int c);

/**
*int _isalpha - Calls the function  print_alphabet.
*Return 0 if successful otherwise 1.
*/

int _isalpha(int c)
{
	/*Checks if character is alphabet*/
	int result;

	if ((c <= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'))
	{
		result = _putchar(1);
	}
	else
	{
		result = _putchar(0);
	}
	_putchar('\n');

	return (result);
}
