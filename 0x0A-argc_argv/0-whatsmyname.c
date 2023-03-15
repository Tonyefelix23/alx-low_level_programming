#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Number of arguments in the program
 * @argv: Array of string
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

