#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 **new_dog - create a new dog and allocate space for it
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length1, length2, index;
	dog_t *newdog;

	while (name[length1] != '\0')
		length1++;
	while (name[length2] != '\0')
		length2++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	(*newdog).name = malloc(length1 * sizeof((*newdog).name));
	if ((*newdog).name == NULL)
	{
		free((*newdog).name);
		free(newdog);
		return (NULL);
	}
	for (index = 0; index <= length1; index++)
	{
		(*newdog).name[index] = name[index];
	}
	(*newdog).owner = malloc(length2 * sizeof((*newdog).owner));
	if ((*newdog).owner == NULL)
	{
		free((*newdog).owner);
		free((*newdog).name);
		free(newdog);
		return (NULL);
	}
	for (index = 0; index <= length2; index++)
	{
		(*newdog).owner[index] = owner[index];
	}
	(*newdog).age = age;
	return (newdog);
}
