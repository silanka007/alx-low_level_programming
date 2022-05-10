#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: a pointer
 */
int *array_range(int min, int max) {
  int *ptr;
  int len;
  int i;

  if (min > max)
    return (NULL);

  len = max - min + 1;
  ptr = malloc(sizeof(min) * len);

  if (ptr == NULL)
    return (NULL);

  for (i = 0; i < len; i++) {
    if (min <= max)
      ptr[i] = min;
    min++;
  }

  return (ptr);
}
