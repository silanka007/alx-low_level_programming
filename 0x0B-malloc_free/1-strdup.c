#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * _strdup - make a copy of string
 * @str: a string
 * Return: a string
 */
char *_strdup(char *str)
{
	char *copy;
	int c;
	int i;

	i = 0;
	c = _strlen(str);

	if (str == NULL)
		return (NULL);

	copy = malloc(c * sizeof(*str));

	if (copy == NULL)
		return (NULL);
	while (i <= c)
	{
		copy[i] = str[i];
		i++;
	}
	copy[c] = '\0';
	
	return (copy);
}


/**
 * _strlen - length of a string
 * @s: the string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;
	i++;

	return (i);
}
		
