#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int _strlen(const char * const s);

/**
 * print_all - prints all arguments
 * @format: data format
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list pa;
	int len;

	len = _strlen(format);

	va_start(pa, format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(pa, int));
		else if (format[i] == 'i')
			printf("%i", va_arg(pa, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(pa, double));
		else if (format[i] == 's')
			printf("%s", va_arg(pa, char *));
	}
	va_end(pa);
	printf("\n");
}


/**
 * _strlen - counts a string
 * @s: string
 * Return: int
 */
int _strlen(const char * const s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

