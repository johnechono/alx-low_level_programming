#include "main.h"
/**
 * _isalpha - function that checks for lower or upper case alphabets
 * @c: parameter to be checked
 * Return: 1
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
