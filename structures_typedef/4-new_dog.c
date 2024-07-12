#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *src);
int _strlen(char *s);

/**
 **new_dog - create a new dog and allocate space for it
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newdog_name;
	char *newdog_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog_name = _strcpy(name);
	if (newdog_name == NULL)
	{
		free(newdog_name);
		free(newdog);
		return (NULL);
	}
	newdog_owner = _strcpy(owner);
	if (newdog_owner == NULL)
	{
		free(newdog_owner);
		free(newdog_name);
		free(newdog);
		return (NULL);
	}
	(*newdog).name = newdog_name;
	(*newdog).age = age;
	(*newdog).owner = newdog_owner;
	return (newdog);
}

/**
 *_strcpy - copy the string in src to dest
 *@src: the original string
 *@dest: the copied string
 *Return: the pointer to dest
 */
char *_strcpy(char *src)
{
int i;
int len;
char *dest;

len = _strlen(src);
dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * _strlen - Calculates the length of a string
 * @s: string
 * Descripion: Calculates the lenght of a string
 * Return: An integer representing the lenght of a string
 */
int _strlen(char *s)
{
int len;

for (len = 0; s[len]; len++)
{}

return (len);
}