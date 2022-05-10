#include "main.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int str_len(char *s);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
  char *ptr;
  unsigned int l1, l2;
  unsigned int i;
  unsigned int j;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  l1 = str_len(s1);
  l2 = str_len(s2);
  l2 = n >= l2 ? l2 : n;
  ptr = malloc((l1 * sizeof(*s1)) + (l2 * sizeof(*s2)) + 1);
  if (!ptr)
    return (NULL);
  i = 0;
  while (i < l1) {
    if (s1[i] != '\0')
      ptr[i] = s1[i];
    i++;
  }
  j = 0;
  while (i < (l1 + l2)) {
    ptr[i] = s2[j];
    i++;
    j++;
  }
  ptr[i] = '\0';

  return (ptr);
}

/**
 * str_len - count the length of character string
 * s: string
 * Return: int
 */
unsigned int str_len(char *s) {
  int n;

  n = 0;
  while (*s++ != '\0')
    n++;
  return (n);
}
