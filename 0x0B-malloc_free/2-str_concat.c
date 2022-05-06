#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * str_concat - concat two strings
 * @s1: string
 * @s2: string
 * Return: a pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int j;
	int len1;
	int len2;

	if (s1 == NULL && s2 == NULL)
		return ('\0');
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s3 = malloc((len1 * sizeof(*s1)) + (len2 * sizeof(*s2)));
	if (s3 == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	while (i < (len1 + len2))
	{
		*(s3 + i) = *(s2 + j);
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}

/**
 * _strlen - count the length of string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	while (*s++ != '\0')
		i++
	i++;
	return (i);
}
