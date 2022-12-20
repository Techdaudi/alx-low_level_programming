#include "main.h"
void puts_half(char *str);

/**
*puts_half - function to print reverse of string.
*@str: a pointer int.
*Return: Nothing.
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i);


	if (i % 2 != 0)
	{
		i = ((i - 1) / 2);
	}
	else
	{
		i = (i / 2);
	}

	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
