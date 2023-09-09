#include "main.h"
/** 
 * _sqrt_recursion - a function that returns the natural square root
 * @n: integer
 * Return: Square root of n
*/
int sqrtt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (sqrtt(x + 1, y));
}
int _sqrt_recursion(int n)
{
	return (sqrtt(1, n));
}
