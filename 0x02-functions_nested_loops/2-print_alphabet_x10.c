#include "main.h"
void print_alphabet_x10(void);

/**
*print_alphabet_x10 - Calls the function  print_alphabet.
*Return 0 if successful otherwise 0.
*/

void print_alphabet_x10(void)
{
	/*Prints lowercase alphabet*/
	char c;
	int n = 1;

	for (n = 1; n <= 10; ++n)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
