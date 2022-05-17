#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: number of var args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i\n", va_arg(ap, int));
	}
	va_end(ap);
}

