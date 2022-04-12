#include "main.h"

/**
 * _isalpha - checks if an character is an alphabet
 * @c: a character in ASCII code
 * Return: always 1 if alphabet else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
