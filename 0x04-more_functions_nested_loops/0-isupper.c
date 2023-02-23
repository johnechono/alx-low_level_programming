#include "main.h"
/**
 * _isupper - a function that checks for uppercase letters
 * @c: the parameter to be checked
 * Return: 1 if its uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
