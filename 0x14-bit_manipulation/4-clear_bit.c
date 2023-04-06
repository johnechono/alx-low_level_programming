#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit
 *
 * Return: 1 if it works, -1 for error messages
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~i;

	return (1);
}
