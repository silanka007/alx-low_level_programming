#include "main.h"

/**
 * *_memset - writes len value of value b to string s
 * @s: a string
 * @b: a character
 * @n: a integer
 * Return: a modified string of b
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i = 0;

  while (i < n)
  {
    *(s + i) = b;
    i++;
  }

  return (s);
}
