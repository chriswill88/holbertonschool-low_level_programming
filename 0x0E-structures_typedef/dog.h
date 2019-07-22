#ifndef _HOL_
#define _HOL_

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - doggy objects
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);


#endif

