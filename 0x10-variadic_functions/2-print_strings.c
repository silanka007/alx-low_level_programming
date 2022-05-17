#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 * @separator: separator
 * @n: number of va args
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		if (!separator || (separator && i == 0))
			printf("%s", va_arg(pa, char *));
		else
			printf("%s%s", separator, va_arg(pa, char *));
	}
	va_end(pa);

	printf("\n");
}

