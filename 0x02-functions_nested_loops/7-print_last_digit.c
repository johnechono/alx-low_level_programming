#include "main.h"

/**
 * print_last_digit - function that prints last digit
 * @i: parameter for the function
 * Return: value of the difit
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);


}
