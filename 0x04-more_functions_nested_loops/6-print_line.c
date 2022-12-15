#include "main.h"

/**
 * print_line - print a function that draws a straign line
 * @n: the int in question
 * Return: a straight line
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
