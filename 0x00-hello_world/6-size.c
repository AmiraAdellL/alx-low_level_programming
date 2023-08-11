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

	printf("Size of char: %d bytes\n", sizeof(chartype));
	printf("Size of int: %d bytes\n", sizeof(inttype));
	printf("Size of float: %d bytes\n", sizeof(floattype));
	printf("Size of long int: %d bytes\n", sizeof(longint));
	printf("Size of long long int: %d bytes\n", sizeof(longinttype));
	return (0);
}
