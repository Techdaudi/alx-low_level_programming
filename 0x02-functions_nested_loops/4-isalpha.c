#include "main.h"
int _isalpha(int c);

/**
*_isalpha - Calls the function print_alphabet.
*@c: characcter to be returned.
*_putchar:  1 if successful 0 otherwise.
*/

int _isalpha(int c)
{
	/*Checks if character is alphabet*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
