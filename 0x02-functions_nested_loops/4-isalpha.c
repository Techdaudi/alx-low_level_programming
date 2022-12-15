#include "main.h"
int _isalpha(int c);

/**
*int _isalpha - Calls the function  print_alphabet.
*Return 0 if successful otherwise 1.
*/

int _isalpha(int c)
{
	/*Checks if character is alphabet*/
	char c;

	if ((c <= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
