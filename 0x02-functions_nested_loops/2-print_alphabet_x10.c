#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * Return: returns nothing (void)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 97; i <=122; i++)
	{
		int j;
		for (j = 0; j < 10; j++) 
			_putchar(i);
		_putchar('\n');
	}
}
