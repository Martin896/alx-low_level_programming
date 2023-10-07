#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  - start of program
 * Return: zero for success
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n; n > 0; n++)
	{
		printf("%d is positive\n", n);
	}
	else if (n; n == 0; n++)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		print("%d is negative", n);
	}
	return (0);
}
