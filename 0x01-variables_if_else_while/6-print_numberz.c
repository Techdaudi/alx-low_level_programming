#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * Return: Returns o if successful 1 otherwise
 */

int main(void)
{
	/*Prints all single digits bass 10*/
	unsigned char ch;

	for (ch = '0'; ch < '10'; ++ch);
	{
		putchar(ch);
	}
	return (0);
}
