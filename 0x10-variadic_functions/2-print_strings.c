#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: string seperator
 * @n: count
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		char *current_str = va_arg(strings, char*);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
