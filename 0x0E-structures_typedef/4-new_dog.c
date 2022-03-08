#include "dog.h"
#include <stdlib.h>


/**
 * _strcpy - copies string
 *
 * @dest: parameter destination
 * @src: origing to copy to
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
		dest[idx] = src[idx];

	dest[idx] = '\0';

	return (dest);
}

/**
 * _strlen - gives the length of the string
 *
 * @s: string to be messuered
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: doggie
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
	{
		return (NULL);
	}

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (doggie->owner == NULL)
	{
		free(doggie);
		free(doggie->name);
		return (NULL);
	}


	doggie->age = age;

	_strcpy(doggie->name, name);
	_strcpy(doggie->owner, owner);

	return (doggie);
}
