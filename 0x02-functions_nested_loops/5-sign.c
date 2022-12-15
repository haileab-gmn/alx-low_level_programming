#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: the character in question
 * Return: 1 for greater thant zero, zero for zero and -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
	return (-1);
	}
}
