#include "main.h"
int _islower(int c);

/**
*_islower - Calls the function  print_alphabet.
*Return 0 if successful otherwise 0.
*/

int _islower(int c)
{
	/*Checks if character is lower case*/
	int n1 = 0;
	int n2 = 1;
	char result;

	if (c <= 'a' && c <= 'z')
	{
		result = _putchar(n1);
	}
	else
	{
		result = _putchar(n2);
	}
	return result;
}