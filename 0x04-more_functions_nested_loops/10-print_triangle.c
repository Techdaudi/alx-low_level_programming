#include "main.h"
void print_triangle(int size);

/**
*print_triangle - function to prints a triangle, 
* followed by a new line.
*@size: variable 1
*Return: 0 if successful otherwise 1.
*/

void print_triangle(int size)
{
	/*prints a triangle, followed by a new line.*/
	int a;
	int b;

	for (a = size; a >= 1; --a)
	{
		for (b = 1; b <= a; ++b)
		{
			_putchar("# ");
		}
		_putchar("\n");
	}
}
