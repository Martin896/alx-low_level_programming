#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - functtion that add all arguments passed
 * @n: count argument
 * Return: sum of numbers
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list them_all;
	unsigned int i;
	int result = 0;

	va_start(them_all, n);

	for (i =  0; i < n; i++)
	{
		if (n == 0)
			return (0);
		result = result + va_arg(them_all, int);
	}
	va_end(them_all);
	return (result);
}

