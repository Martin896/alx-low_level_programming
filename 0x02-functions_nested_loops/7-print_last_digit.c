#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function prints the last digit of a number
 * @i: function variable
 * Return: last digit
 **/

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);
	return (last_digit);

}

