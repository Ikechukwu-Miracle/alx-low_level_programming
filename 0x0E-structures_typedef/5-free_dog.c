#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated to dog
 * @d: pointer to struct dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
