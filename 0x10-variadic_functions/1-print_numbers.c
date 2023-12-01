#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: string between numbers
 * @n: count
 * Return: Void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;
		printf("%d", va_arg(nums, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
