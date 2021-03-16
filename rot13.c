#include "holberton.h"

/**
 * rot13 - encondes a string using rot13
 * @s: string to convert
 *
 * Return: converted string
 */

char *rot13(char *s)
{
	int v, w;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (v = 0; s[v] != '\0'; v++)
	{
		for (w = 0; w <= 48; w++)
		{
			if (s[v] == a[w])
			{
				s[v] = b[w];
				break;
			}
		}
	}
	return (s);
}
