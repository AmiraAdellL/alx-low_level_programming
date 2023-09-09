#include "main.h"
/**
 * Prime_Number - a function that checks the integer from is_prime_number
 * @x : The integer
 * @y: The integer
 * Return: Success (1) else (0)
*/
int Prime_Number(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (Prime_Number(x, y + 1));
}
/**
 * is_prime_number - a function that returns 1 if the integer is prime number
 * @n : The integer
 * Return: Success (1) else (0)
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (Prime_Number(n, 2));
}
