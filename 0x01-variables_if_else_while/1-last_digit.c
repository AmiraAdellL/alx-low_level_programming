#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Start
 * Description: A program that prints the last digit of the number
 * Return: (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
	}
	return (0);
}
