#include "main.h"

/**
 * _strncat - concatenate strings together
 * @dest: the destination string
 * @src: the source string
 * @n: the length of src that should be concatenated to dest
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
