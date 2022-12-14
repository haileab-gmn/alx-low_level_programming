#include "main.h"
/**
 * print_alphabet_x10 - ten times the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int num = 1;

	while (num <= 10)
	{
		for (ch  = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		num++;
	}
}
