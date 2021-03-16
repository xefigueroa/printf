#include "holberton.h"

/**
 * _puts - prints a string
 * @str: some pointer thing.
 *
 * Return: void.
 */

int _puts(char *str)
{
	int v, str1;

	v = str1 = 0;
	while (str[v])
	{
		_putchar(str[v]);
		v++;
		str1++;
	}
	return (str1);
}
