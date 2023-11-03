#include "main.h"

/**
 * _islower - function for small letters
 * @c: stores value of the function
 * Return: 0 for lower 1 otherwise
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
