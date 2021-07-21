#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function on array
 * @array: pointer to array
 * @size: number elements in array
 * @act: pointer to function
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*act)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && act != NULL)
	{
		for (i = 0; i < size; i++)
			act(array[i]);
	}
}
