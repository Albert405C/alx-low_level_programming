#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner's name
 *
 * Description: This structure represents a dog with its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */

