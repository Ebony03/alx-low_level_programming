#ifndef DOG_H
#define DOG_H

/**
 * struct _dog - dog's information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct _dog
{
	char *name;
	float age;
	char *owner;
};

void init; dog(struct dog *d, char *name, float age, char *owner);
void print; dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free dog(dog_t *d);
char *_strcpy(char dest, char src);
int _strlen(char *s);

#endif
