#include "holberton.h"
#include <stdlib.h>

/**
 * rot13 - encondes a string using rot13
 * @s: string to convert
 *
 * Return: converted string
 */

char *rot13(va_list arg)
{
	char *str;
	int v, w;
	int count = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	for (v = 0; s[v] != '\0'; v++)
	{
		for (w = 0; w <= 48; w++)
		{
			if (s[v] == a[w])
			{
				/* s[v] = b[w]; */
				_putchar(b[w]);
				count++;
				break;
			}
		}
		if (!a[w])
		{
			_putchar(str[v]);
			count++
		}
	}
	return (count);
}
