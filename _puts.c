#include "holberton.h"

/**
 * _puts - prints a string
 * @str: some pointer thing.
 *
 * Return: void.
 */

int _puts(char *str)
{
	int v;
	int str1 = 0;

	for (v = 0; str[v]; str++, v++)
	{
		_putchar(str[v]);
	}
	return (str1);
}
