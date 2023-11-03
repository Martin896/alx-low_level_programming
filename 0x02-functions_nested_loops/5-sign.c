#include "main.h"

/**
 * print_sign - function to print sign of a number
 * @n: fuction variable
 * Return: 1 for + sign 0 for zero -1 for - sign
 **/

int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{	_putchar('0');
		return (0);
	}
	else
	{	_putchar('-');
		return (-1);
	}
}
