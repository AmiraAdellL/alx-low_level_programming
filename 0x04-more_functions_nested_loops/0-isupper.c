#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: the checked character
 * Return:(1) if upper case otherwise return (0)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
