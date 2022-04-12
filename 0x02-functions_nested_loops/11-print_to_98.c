#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: passed in argument of type integer
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
			n--;
		}

	}
	_putchar('\n');
}

