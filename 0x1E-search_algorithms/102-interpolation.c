#include "search_algos.h"
/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  * Description: Prints a value every time it is compared in the array
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t j, m, s;

	if (array == NULL)
		return (-1);

	for (m = 0, s = size - 1; s >= m;)
	{
		j = m + (((double)(s - m) / (array[s] - array[m])) * (value - array[m]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			s = j - 1;
		else
			m = j + 1;
	}
	return (-1);
}
