#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the number to get its absolute
 * Return: Absolute value
*/
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (n);

}
