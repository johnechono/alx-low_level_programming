#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive;
	unsigned int bit_count;

	exclusive = n ^ m;
	bit_count = 0;

	while (exclusive > 0)
	{
		bit_count += (exclusive & 1);
		exclusive >>= 1;
	}
	return (bit_count);
}
