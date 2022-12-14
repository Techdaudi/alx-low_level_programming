#include "main.h"
void print_alphabet(void);

/**
*main - Calls the function  print_alphabet.
*Return 0 if successful otherwise 0.
*/

int main(void)
{
	/*Call functon print_alphabet*/

	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	/*Prints lowercase alphabet*/
	char c;

	for (c = 'a';c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n);
}
