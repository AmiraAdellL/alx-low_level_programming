#include <stdio.h>
/**
 * main - Start
 * Description: C program that prints the size of various types.
 * Return: 0 (Success)
 */

int main(void)
{
	char chartype;
	int inttype;
	float floattype;
	long int longint;
	long long int longinttype;

	printf("Size of char: %lu byte(s)\n", sizeof(chartype));
	printf("Size of int: %lu byte(s)\n", sizeof(inttype));
	printf("Size of float: %lu byte(s)\n", sizeof(floattype));
	printf("Size of long int: %lu byte(s)\n", sizeof(longint));
	printf("Size of long long int: %lu byte(s)\n", sizeof(longinttype));
	return (0);
}
