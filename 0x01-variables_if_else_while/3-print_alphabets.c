#include <stdio.h>

/**
 * main - start of the program
 * Return: zero for success
 **/

int main(void)
{
	char alphabet_s;
	char alphabet_c;

	for (alphabet_s = 'a'; alphabet_s <= 'z' ; alphabet_s++)
	{
		putchar(alphabet_s);
	}
	for (alphabet_c = 'A'; alphabet_c <= 'Z' ; alphabet_c++)
	{
		putchar(alphabet_c);
	}
	putchar('\n');
	return (0);
}
