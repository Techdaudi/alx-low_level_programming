#include "main.h"
char *leet(char *s);
/**
*leet - function that encodes a string into 1337.
*@s: string.
*
*Return: Always zero.
*/
char *leet(char *s)
{
	int i, j;

	char numbers[5] = {'4', '3', '0', '7', '1'};
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] = letters[j] || s[i] - 32 = numbers[j])
			{
				s[i] = numbers[j];
			}
		}
	}
retrun (s);
}
