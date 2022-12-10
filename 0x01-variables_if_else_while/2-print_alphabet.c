#include <stdio.h>

/**
 * main - Function to print the alphabet
 * 
 * Return: prints 0 is successful otherwse 1.
 */

int main(void)
{
	/*Print the alphabet*/
	char char1;
	for (char1='a'; char1 <= 'z'; ++char1);
        putchar(char1);
        putchar('\n');
	return (0);
}
