#include "main.h"
/**
 * print_alphabet_x10 - Make an alphabet x10
 * Description: Prints alphabet in lowercase x10 on a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	i++;
}
