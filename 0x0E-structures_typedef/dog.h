#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains information about dogs
 * @name: this the name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 *
 * Description: The struct dog holds variables of different dogs
 * and thier owners
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
