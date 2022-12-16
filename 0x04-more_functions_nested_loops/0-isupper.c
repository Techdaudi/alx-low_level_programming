#include "main.h"
int _isupper(int c);

/**
*_isupper - Prints absolute valu of number.
*@c: parameter to be returned
*return: 0 if successful otherwise 1.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
