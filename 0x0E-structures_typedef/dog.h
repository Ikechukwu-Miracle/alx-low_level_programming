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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
