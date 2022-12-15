#include "main.h"

/**
 * _isdigit - checks for digits 0 to 9
 * @c: the int in question
 * Return: 1 is its a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
