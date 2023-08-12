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
	int n, Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last = n % 10;
	if (Last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last);
	}
	if (Last == 0)
	{
		printf("Last digit of %d is 0 %d and is 0\n", n, Last);
	}
	if (Last < 6 && Last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last);
	}
	return (0);
}
