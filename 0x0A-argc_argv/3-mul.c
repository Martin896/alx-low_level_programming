#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of the program
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int s, y;

	if (argc != 3)
		printf("Error\n");
	else
	{	s = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", s * y);
	}
	return (0);

}
