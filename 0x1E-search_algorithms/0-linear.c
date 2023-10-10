#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in  array of
 * integers using Linear search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to look for
 * Return: index of the found value,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (!array || size == 0)
		return (-1);

	while (j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
