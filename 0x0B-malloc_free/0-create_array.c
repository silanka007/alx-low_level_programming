#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and initialize them with specific char
 * @size: the memory allocation size
 * @c: the specific character
 * Return: array of specific character
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	int num = size * sizeof(c);
	char *charArr = malloc(num);

	if (size == 0)
		return (NULL);

	if (charArr == NULL)
		return (NULL);
	while (i < num)
	{
		*(charArr + i) = c;
		i++;
	}
	return (charArr);
}

