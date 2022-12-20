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
	int j;

	for (i = 0; str[i] != '\0'; ++i);


	if (i % 2 != 0)
	{
		j = ((i - 1) / 2);
	}
	else
	{
		j = (i / 2);
	}

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
