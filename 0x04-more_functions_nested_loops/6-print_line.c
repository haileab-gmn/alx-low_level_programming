#include "main.h"

/**
 * print_line - print a function that draws a straign line
 * @n: the int in question
 * Return: a straight line
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
