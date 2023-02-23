#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet using putchar
 *
 * Description: This function prints the lowercase alphabet using the putchar
 * function. It starts with the letter 'a' and ends with the letter 'z'.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
