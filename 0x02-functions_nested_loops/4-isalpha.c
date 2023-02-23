#include "main.h"
/**
 * _isalpha - a code that checks for alphabetic charactr
 * @c: a function that checks for alphabetic character
 * Return: 1 if 'c' is a letter lowercase or uppercase otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
