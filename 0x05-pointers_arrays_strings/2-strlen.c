#include "main.h"
int _strlen(char *s);

/**
*swap_int - function to swap 2 integers.
*@s: a pointer string.
*Return: nothing.
*/
int _strlen(char *s)
{
	int i;

	for (i=0; s[i] != '\0'; ++i);

	_putchar(i / 10 + '0');

	return (0);
}
