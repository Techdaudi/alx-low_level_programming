#include <stdio.h>

/**
*main - Function to print the alphabet
*  
*Return: prints 0 is successful otherwse 1.
*/

int main(void)
{
	/*Print the alphabet*/
	char c;
	char a = 0;
	char z = 26;

	while (c < z)
	{
		for (c='a'; c <= 'z'; ++c);
		putchar(c);
		putchar('\n');
	}
	return (0);
}
