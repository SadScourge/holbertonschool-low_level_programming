#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog - print info about a dog
 *@d: the struct containing information a bout the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if ((*d).age == 0.0)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}
	if ((*d).name == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
