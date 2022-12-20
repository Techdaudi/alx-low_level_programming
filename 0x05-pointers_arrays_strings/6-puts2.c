#include "main.h"
void puts2(char *str);

/**
*puts2 - function to print reverse of string.
*@str: a pointer int.
*Return: Nothing.
*/
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; ++n)
		if (n % 2 == 0)
		{
			_putchar(str[n]);
			++n;
	}
	_putchar('\n');
}
