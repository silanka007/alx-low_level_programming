#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: passed in argument of type integer
 * Return: nothing
 */

void print_to_98(int n)
{
	int stat;

	if(n < 0)
		stat = 0;
	else
		stat = n;
	while(stat <= 98)
	{
		printf("%i, ", stat);
		stat++;
	}
	_putchar('\n');
}

