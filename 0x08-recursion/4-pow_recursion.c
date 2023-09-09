#include "main.h"
/**
 *  _pow_recursion -  a function that returns the value x raised to power y
 * @x: integer
 * @y: integer
 * Return: Success (1) else (-1)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
