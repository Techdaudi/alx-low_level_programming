#include "main.h"
void puts2(char *str);

/**
*puts2 - function to print reverse of string.
*@str: a pointer int.
*Return: Nothing.
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(*(str + i));
		++i;
	}
	_putchar('\n');
}
