#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value starting from 0.
 *
 * Return: 1 if it works and -1 if it doesn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = (*n | i);

	return (1);
}
