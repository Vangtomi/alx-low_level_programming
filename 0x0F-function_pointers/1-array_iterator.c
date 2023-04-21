#include "function_pointers.h"
#include <stdio.h>
/**
 * arra_iterator - prints each array elem on a new line
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (arry == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(arrat[i]);
	}
}
