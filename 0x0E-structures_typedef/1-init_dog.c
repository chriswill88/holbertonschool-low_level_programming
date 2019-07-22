#include "dog.h"
/**
* init_dog - initializes the values in the struct
* @d: pointer to dog structure
* @name: the name of the dog
* @age: the age
* @owner: the name of the owner
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
