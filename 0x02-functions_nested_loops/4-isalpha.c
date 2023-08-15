#include "main.h"
/**
 * _isalpha - function to check the alphabetic characters
 * Description: a function that checks for alphabetic character.
 * @c: the checked character
 * Return: (1) if Letter (0) otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
