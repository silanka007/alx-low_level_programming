#include "main.h"
/**
*_isdigit - checks for a digit
*
*@c: parameter to be checked
*Return: 1 or 0
*/
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
