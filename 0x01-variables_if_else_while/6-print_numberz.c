#include <stdio.h>
/**
 * main - start
 * Description: Write a program that prints all single digit numbers
 * Return: (0) Success
 */

int main(void)
{
	int N = 0;
	
	for (N = 0; N < 10; N++)
	{
		putchar(N + '0');
	}
	putchar('\n');
	
	return (0);
}
