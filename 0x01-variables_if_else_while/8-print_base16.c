#include <stdio.h>

/**
 * main - start of the program
 * Return: zero for success
 **/

int main(void)
{
	int num;

	for (num = 0; num < 16 ; num++)
	{
		if (num >= 10)
		{
			putchar('a' + (num - 10));
		}
		else
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
	return (0);
}
