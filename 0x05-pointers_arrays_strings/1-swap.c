#include "main.h"
void swap_int(int *a, int *b);

/**
*swap_int - function to swap 2 integers.
*@a: a pointer int.
*@b: another pointer int
*Return: nothing.
*/
void swap_int(int *a, int *b)
{
	int a_temp = *a
	*a = *b;
	*b = *a_temp;
}
