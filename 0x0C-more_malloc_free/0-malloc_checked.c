#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - allocates a given memory space
 *@b: size of the memory
 *Return: pointer to the The memory
 */
void *malloc_checked(unsigned long int b)
{
	char *arr;

	arr = malloc(b);

	if  (arr == NULL)
		exit(98);

	return (arr);
}
