#include <stdio.h>
#include <ctype.h>

/**
*main - Function to print the alphabet
*
*Return: prints 0 is successful otherwse 1.
*/

int main(void)
{
	/*Print the alphabet*/
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
