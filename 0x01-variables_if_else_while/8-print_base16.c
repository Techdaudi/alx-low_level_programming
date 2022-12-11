#include <stdio.h>

/**
 * main - Prints reverse of lowercase letters
 * Return: Returns o if successful 1 otherwise
 */

int main(void)
{
	/*Prints loswercase alphabet in reverse*/
	int n;
	char ch;

	for (n = 1; n <= 9; ++n)
	{
		putchar((n%10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
