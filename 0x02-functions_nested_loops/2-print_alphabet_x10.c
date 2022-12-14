#include "main.h"
void print_alphabet_x10(void);

/**
*main - Calls the function  print_alphabet.
*Return 0 if successful otherwise 0.
*/

int main(void)
{
	/*Call functon print_alphabet*/
	int d;

	for (c = 1;c <= 10, ++d);
	{
		print_alphabet();
	}

	return (0);
}

void print_alphabet_x10(void)
{
	/*Prints lowercase alphabet*/
	char c;

	for (c = 'a';c <= 'z'; ++c);
	{
		_putchar(c);
	}
	_putchar('\n');
}
