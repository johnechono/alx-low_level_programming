#include "search_algos.h"

/**
  * binary_search - Searches for a value in sorted array
  *                 of integers using binary search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t j, right, left;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}
	return (-1);
}
