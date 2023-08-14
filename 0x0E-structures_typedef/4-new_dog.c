#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates and initializes a dog struct
* and returns a pointer to the dog struct
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to a dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
