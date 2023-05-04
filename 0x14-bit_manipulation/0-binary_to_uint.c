#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number if there is one
 * or 0 if there is more chars in the string b
 * that is not 0 or 1
 **/

unsigned int binary_to_uint(const char *b)
{
	int a, num = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
	num <<= 1;

	if (b[a] == '1')
	{
		num |= 1;
	}
	}

	return (num);

}

