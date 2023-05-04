#include "main.h"

/**
 * get_bit - returns the value of a bit
 * at a given index
 * @n: range of the bit
 * @index: the index
 * Return: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_num = (n >> index) & 1;

		return (bit_num);


}
