#ifndef MOLeLib
#define MOLeLib

/**
* struct dog - structure for dog
* @name: hold the name of dog
* @age: hold age of dog
* @owner: hold name of dog's owner
*
* Description: basic dog info storage class using struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* typedef dog_t - alias for dog struct
*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
