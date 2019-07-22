#include "dog.h"
/**
* new_dog - creating a new dog
* @name: name of dog
* @age: age of dog
* @owner: name of the owner
* Return: pointer to dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, n = 0;
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	while (name[i])
		i++;
	i++;

	d->name = malloc(sizeof(char) * i);
	if (d->name == NULL)
		return (NULL);

	while (n < i)
	{
		d->name[n] = name[n];
		n++;
	}

	d->age = age;

	i = 0;
	n = 0;

	while (owner[i])
		i++;
	i++;

	d->owner = malloc(sizeof(char) * i);
	if (d->owner == NULL)
		return (NULL);
	while (n < i)
	{
		d->owner[n] = owner[n];
		n++;
	}
	return (d);
}
