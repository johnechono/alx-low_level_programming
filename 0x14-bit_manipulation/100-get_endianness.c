#include "main.h"
/**
 * get_endianness - checks if machine is big or little endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *p;

	i = 1;
	p = (char *)&i;

	if (*p == 1)
	{
		return (1);
	}
	return (0);
}
