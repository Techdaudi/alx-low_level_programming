#include "main.h"
void reverse_array(int *a, int n);

/**
*reverse_array - function that reverses the content of an array of integers.
*@a: array
*@n: integer
*Return: integer.
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; --i)
	{
		_putchar(a[i]);
		_putchar(', ');
	}
}

