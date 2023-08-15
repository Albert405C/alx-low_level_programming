#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - Defines a dog's characteristics
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog myDog;

    init_dog(&myDog, "Buddy", 3.5, "Alice");

    printf("Dog's Name: %s\n", myDog.name);
    printf("Dog's Age: %.2f\n", myDog.age);
    printf("Dog's Owner: %s\n", myDog.owner);

    return (0);
}

