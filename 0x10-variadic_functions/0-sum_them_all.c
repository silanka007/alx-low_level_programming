#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up its parameters
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(pa, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(pa);

	return (sum);
}
