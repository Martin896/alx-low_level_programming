#include "main.h"

/**
 * _isalpha - function to check capital letters
 * @c: function argument
 * Return: 0 if c is a letter 0 otherwise
 **/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
