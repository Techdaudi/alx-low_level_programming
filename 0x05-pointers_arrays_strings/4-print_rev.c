#include "main.h"
void print_rev(char *s);

/**
*print_rev - function to print reverse of string.
*@str: a pointer int.
*Return: Nothing.
*/
void _puts(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar("%c", str[j]);
	}
	_putchar('\n');
}
