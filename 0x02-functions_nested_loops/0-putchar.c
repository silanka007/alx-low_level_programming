#include "main.h"

/**
 * main prints the string _putchar
 * Return: always 0 for success
*/
int main(void)
{
	char txt[8] = "_putchar";
	int i;
	for(i = 0; i < 8; i++)
		_putchar(txt[i]);
	_putchar('\n');
	return (0);
}
