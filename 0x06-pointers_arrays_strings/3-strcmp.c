#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the diff - an integer value
 */
int _strcmp(char *s1, char *s2)
{
	int shouldLoop = 1;
	int i = 0;
	int val1;
	int val2;

	while (shouldLoop)
	{
		val1 = (int)*(s1 + i);
		val2 = (int)*(s2 + i);
		if (val2 != val1)
		{
			shouldLoop = 0;
			return (val1 - val2);
		}
		i++;
	}
	return (0);
}
