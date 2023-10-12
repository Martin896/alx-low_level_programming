#include <stdio.h>

/**
 * main - start of the program
 * Return: Zero for success
 **/

int main(void)
{
	char alphabet_r;

	for (alphabet_r = 'z'; alphabet_r >= 'a'; alphabet_r--)
	{
		putchar(alphabet_r);
	}
	putchar('\n');
	return (0);
}
