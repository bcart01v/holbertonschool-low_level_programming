#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - the dog to be created
 * @name:dog's name
 * @age:dog's age
 * @owner:dogs owner
 * Return:new_dog
 * I have a memory leak but I don't know FROM WHAT
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *dog_name = strdup(name);
	char *dog_owner = strdup(owner);

	if (new_dog && dog_name && dog_owner)
	{
		new_dog->name = dog_name;
		new_dog->age = age;
		new_dog->owner = dog_owner;
		
		return(new_dog);
	}
	free(new_dog);
	free(dog_name);
	free(dog_owner);
	return (0);
}
