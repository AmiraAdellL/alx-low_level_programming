#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* DEscription: A program to check if the number is positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n, "is positive");
	}
	if (n < 0)
	{
		printf(n, "is negative");
	}
	if (n == 0)
	{
		printf(n, "is zero");
	}

	return (0);
}
