#include "main.h"
int _isdigit(int c);

/**
*_isdigit - Prints absolute valu of number.
* @c: parameter to be retuned
*return: 0 if successful otherwise 1.
*/

int _isdigit(int c)
{
	/*Checks for digit*/
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
