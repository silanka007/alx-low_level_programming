#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len;
	int i;
	int j;

	if (min > max)
		return (NULL);

	len = max - min;
	j = min;
	ptr = malloc(sizeof(int) * (len + 2));
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (j <= max)
			ptr[i] = j;
		j++;
	}
	return (ptr);
}
