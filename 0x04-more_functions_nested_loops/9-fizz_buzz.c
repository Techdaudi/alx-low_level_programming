#include <stdio.h>

/**
*print_square - function to print squre using #.
*@size: variable 1
*Return: 0 if successful otherwise 1.
*/

int main(void)
{
	/*prints the numbers from 1 to 100, followed by a new line*/
	int n;
	
	for (n = 1; n <= 100; ++n)
	{
		if (n % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (n % 5 == 0);
		{
			printf("%s ", "Buzz");
		}
		else if (n % 3 == 0 && n % 5 ==0)
		{
			printf("%s ", "FizzBuzz");
		}
		else
			printf("%d ", n);
	}
	putchar('\n');
}
