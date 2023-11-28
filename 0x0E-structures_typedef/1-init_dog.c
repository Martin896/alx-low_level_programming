#include "dog.h"
/**
 * init_dog - function name
 * struct dog - user defined datatype
 * @d: pointer variable
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;

	}
}
