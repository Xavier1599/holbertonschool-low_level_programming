#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining a new struct with elements
 *
 * @name: a char parameter
 * @age: a float parameter
 * @owner: a char parameter
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
