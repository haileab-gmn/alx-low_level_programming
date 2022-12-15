#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the input charatcter
 * Return: 1 if it is upper case, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
