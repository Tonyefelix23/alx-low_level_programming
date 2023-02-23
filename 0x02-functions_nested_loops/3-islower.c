#include "main.h"
/**
 * _islower - Checks for lowercase character
 * Description: a function that checks for lowercase character.
 * Return: 1 for lowerxase charater and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
