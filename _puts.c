#include "holberton.h"

/**
 * _puts - prints a string
 * @str: some pointer thing.
 *
 * Return: void.
 */

void _puts(char *str)
{
	int v;

	for (v = 0; str[v]; v++)
	{
		_putchar(str[v]);
	}
	_putchar('\n');
}
