#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned long int b) {
  void *ptr;

  ptr = malloc(b);

  if (ptr == NULL)
    exit(98);

  return (ptr);
}
