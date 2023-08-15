#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 *
 * Description: This function initializes a struct dog with the given values
 *              for name, age, and owner. 
 *
 *
 *
 * Return: None
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

