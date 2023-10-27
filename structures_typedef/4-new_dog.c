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
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	
	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		if (new_dog->name == NULL)
		{
			free(new_dog->owner);
			free(new_dog);
			return (NULL);
		}
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		return (new_dog);
	}
}
	
	
	