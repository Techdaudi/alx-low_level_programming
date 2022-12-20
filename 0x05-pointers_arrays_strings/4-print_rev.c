#include "main.h"
void print_rev(char *s);

/**
*print_rev - function to print reverse of string.
*@s: a pointer int.
*Return: Nothing.
*/
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i);
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
