#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char j;

	j = 'a';
	while
		(j <= 'z')
		{
			if ((j != 'q' && j != 'e') && j <= 'z')
				putchar(j);
			j++;
		}
	putchar('\n');
	return (0);
}
