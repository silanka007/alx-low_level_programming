#include "main.h"
#include <stdio.h>

unsigned int _two_to_pow(unsigned int power);
unsigned int _strlen(const char *b);

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: string of 1s and 0s
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int len;
	unsigned int idx;
	unsigned int result;
	unsigned int current;

	if (b == NULL)
		return (0);

	result = 0;
	len = _strlen(b);
	i = 0;

	while (b[i] != '\0')
	{
		idx = len - i;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		current = b[i] == '1' ? 1 : 0; 
		result += current * _two_to_pow(idx - 1);
		i++;
	}
	return (result);
}

unsigned int _two_to_pow(unsigned int power)
{
	unsigned int i;
	unsigned int res;

	if (!power)
		return (1);

	res = 1;
	for (i = 0; i < power; i++)
		res *= 2;
	return (res);
}

unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	while (*b++ != '\0')
		i++;
	return (i);
}

