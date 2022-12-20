#include "main.h"
void rev_string(char *s);

/**
*rev_string - function to print reverse of string.
*@s: a pointer int.
*Return: Nothing.
*/
void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
