#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - user defined datatype
 * @name: name of dog
 * @age: dog age
 * @owner: oweners name
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
