#ifndef DOG_H
#define DOG_H

int _putchar(int c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

/**
 *struct dog - contain information about dogs
 *@name: name of a dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Description: this new type will keep information about dogs
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
