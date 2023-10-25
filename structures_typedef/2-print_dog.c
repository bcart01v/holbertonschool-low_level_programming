#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog
 * @d: the pointer received that contains the Dog
 * 
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil");
	}
}
