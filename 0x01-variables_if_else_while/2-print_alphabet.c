#include <stdio.h>

/**
*main - Function to print the alphabet
*  
*Return: prints 0 is successful otherwse 1.
*/

int main(void)
{
	/*Print the alphabet*/
	int c;
	
	for(c='A'; c <= 'Z'; c++)
	{
		char sm = tolower(c);
		putchar(sm);
		putchar('\n');
	}
	return (0);
}
