#include <stdio.h>

/**
 * main - start of the program
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0
 **/

int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
		printf("%s\n", argv[s]);
	return (0);
}
