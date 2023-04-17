#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - gets the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copies string into new buffer
 * @dest: new buffer
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;
	while (src[length] != '\0')
		length++;

	for (i = 0 ; i < length ; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates new dog variable
 * @name: name of new dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (length1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (length2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
