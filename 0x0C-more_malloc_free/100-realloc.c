#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_realloc - mimics the realloc function
 *@ptr: original memory
 *@old_size: old memory size
 *@new_size: new memory size
 *
 *Return: New memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int i;
	char *temp = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	mem = malloc(new_size);

	if (!mem)
		return (NULL);
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
		{
		mem[i] = temp[i];
		}
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			mem[i] = temp[i];
		}
	}
	free(ptr);
	return (mem);
}
