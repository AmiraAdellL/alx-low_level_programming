#include <stdio.h>
/**
 * main - start
 * Description: a program that prints all the numbers of base (16)
 * Return: (0) Success
*/

int main(void)
{
	int HexN = 48;

	for (HexN = 48; HexN <= 102; HexN++)
	{
		putchar(HexN);
		if (HexN == 57)
		{
			HexN += 39;
		}
	}
	putchar('\n');
	return (0);

}
