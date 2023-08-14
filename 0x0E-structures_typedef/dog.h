#ifndef DOG_H
#define DOG_H

/**
 * struct dog: structure representing the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: The owners name
 *
 * Description: This structure represents a dog with its name, age and name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

