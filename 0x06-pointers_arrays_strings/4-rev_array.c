#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: The array
 * @n: The integers
 * Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int x = 0;
	int y = 0;

	for (i = 0; i < n - 1; i++)
	{
		for (x = i + 1; x > 0; x--)
		{
			y = *(a + x);
			*(a + x) = *(a + (x - 1));
			*(a + (x - 1)) = y;
		}
	}
}
