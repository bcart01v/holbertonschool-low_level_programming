#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- free memory allocated for a struct dog
 * @d:dog struct to be free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
