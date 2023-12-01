#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: constant character pointer
 * Return: void
 **/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *separator = "";
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format != NULL && *ptr != '\0')
	{
		i = 0;

		while (i < 4)
		{
			if (*ptr == "cifs"[i])
			{
				if (*ptr == 'c')
					printf("%s%c", separator, va_arg(args, int));
				else if (*ptr == 'i')
					printf("%s%d", separator, va_arg(args, int));
				else if (*ptr == 'f')
					printf("%s%f", separator, va_arg(args, double));
				else if (*ptr == 's')
				{
					str = va_arg(args, char *);
					if (str == NULL)
						printf("%s(nil)", separator);
					else
						printf("%s%s", separator, str);
				}
				separator = ", ";
				break;
			}
			i++;
		}
		ptr++;
	}

	va_end(args);
	printf("\n");
}
