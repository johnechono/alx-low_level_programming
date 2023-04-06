#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of n
 * @n: the number that will be printed
 * Return: no need to use this
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
