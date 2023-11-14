#include "main.h"

/**
 * swap_int - function that swaps value of integer using pointer
 * @a: pointer variable
 * @b: pointer variable
 * Return: void
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
