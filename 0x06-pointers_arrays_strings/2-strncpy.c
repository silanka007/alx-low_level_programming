#include "main.h"

/**
 * _strncopy - copy string
 * @dest: destination string
 * @src: source string
 * @n: length of src to copy to dest
 * Return: new copied string
 */
char *_strncopy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (*(dest + i) != '\0')
			if (*(src + i) != '\0')
				*(dest + i) = *(src + i);
			else
				*(dest + i) = '\0';
	}
	return (dest);
}
