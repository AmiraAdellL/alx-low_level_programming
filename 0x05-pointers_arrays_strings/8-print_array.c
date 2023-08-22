#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: Array
 * @n: number of elements
 * Return: nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
