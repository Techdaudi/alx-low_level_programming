#include <stdio.h>

/**
 * main - Prints reverse of lowercase letters
 * Return: Returns o if successful 1 otherwise
 */

int main(void)
{
	/*Prints loswercase alphabet in reverse*/
	int n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');

	return (0);
}
