#include <dog.h>
#include <stlib.h>
/**
 * _dog - initialize a variable
 * @d: variable to be initialize
 * @name: name of variable
 * @age: age to be initialize
 * @owner: owner  of variable
 */
void init _dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
