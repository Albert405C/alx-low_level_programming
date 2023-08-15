#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 *
 * Description: This function initializes a struct dog with the given values for
 *              name, age, and owner. If the provided pointer to struct dog (d)
 *              is NULL, the function allocates memory for a new struct dog and
 *              initializes it. The caller is responsible for freeing the memory
 *              when it is no longer needed.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

