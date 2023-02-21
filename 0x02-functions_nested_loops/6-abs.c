#include "main.h"
/**
 * _abs - function that prints the abslute value of an integer
 * @a: parameter for the function
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
