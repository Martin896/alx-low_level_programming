#include "main.h"

/**
 * _abs - function that computes the absolute of a number
 * @i: interger to pass
 * Return: 0 for success
 **/

int _abs(int i)
{

	if (i < 0)
		i = -1 * i;
	return (i);
}
