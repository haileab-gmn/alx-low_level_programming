#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random function last digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;


	if (d > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
	printf("last digit of %d is %d and is zero\n", n, d);
	}
	else
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, d);

	return (0);
}