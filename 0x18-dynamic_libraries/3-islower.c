#include "main.h"

/**
 * _islower - function that prints lowercase character
 * @c: parameter to be printed
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
