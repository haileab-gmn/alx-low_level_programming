#include "main.h"
/**
 * print_last_digit -  print last digit
 * @num: the intiger in question
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int r;

	r = num % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}

