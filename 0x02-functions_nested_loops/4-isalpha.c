#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: the charcter in question
 * Return: 1 for alphabets and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
