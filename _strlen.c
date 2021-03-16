#include "holberton.h"

/**
 * _strlen - gives length of string
 * @s: string
 *
 * Return: length
 */

int _strlen(const char *s)
{
	int v;
	char i;

	v = 0;
	i = 'n';

	while (i != '\0')
	{
		i = s[v];
		v++;
	}

	return (v - 1);
}
