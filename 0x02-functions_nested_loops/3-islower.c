#include "main.h"
int _islower(int c);

/**
*_islower - Calls the function  print_alphabet.
*Return 0 if successful otherwise 0.
*/

int _islower(int c)
{
	/*Checks if character is lower case*/
	charn1 = 0;
	char n2 = 1;
	int result;

	if(c >= 'a' && c <= 'z')
	{
		result = _putchar(n2);
	}
	else
	{
		result = _putchar(n1);
	}
	return result;
}
