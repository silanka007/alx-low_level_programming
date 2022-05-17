#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @format: data format
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list pa;
	char *sep;
	char *str;

	i = 0;
	sep = "";

	va_start(pa, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%i", sep, va_arg(pa, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(pa, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(pa, double));
					break;
				case 's':
					str = va_arg(pa, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = ", ";
		}
	}
	va_end(pa);
	printf("\n");
}

