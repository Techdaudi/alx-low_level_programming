#include "main.h"
void print_alphabet(void);

/**
*print_alphabet - Calls the function  print_alphabet.
*Return 0 if successful otherwise 0.
*/

void print_alphabet(void)
{
	/*Prints lowercase alphabet*/
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
