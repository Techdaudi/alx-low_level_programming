#include "main.h"
int _isalpha(int c);

/**
*int _isalpha - Calls the function  print_alphabet.
*Return 0 if successful otherwise 1.
*/

int _isalpha(int c)
{
	/*Checks if character is alphabet*/
	char n1 = 0;
	char n2 = 1;
	int result;

	if ((c <= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'))
	{
		result = _putchar(n2);
	}
	else
	{
		result = _putchar(n1);
	}
	return (result);
}
