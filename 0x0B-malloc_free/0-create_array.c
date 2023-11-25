#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create an array
 * @size: nfunction argument
 * @c: function character argument
 * Return: character pointer
 **/

char *create_array(unsigned int size, char c)
{
	char *arraypt;
	unsigned int i;

	arraypt = (char *) malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (arraypt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arraypt[i] = c;
	return (arraypt);
}
