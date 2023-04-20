#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a funtion given as a param
 * @array: array
 * @size: size of elem to print
 * @action: pter to print in regualar
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
