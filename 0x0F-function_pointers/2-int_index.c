#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for int
 * @array: array of int
 * @size: size of array
 * @cmp: function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

