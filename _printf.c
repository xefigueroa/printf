#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int convert(unsigned int num, int base);

/**
 * _printf - prints stuff :D
 * @format: output modifier to be used
 * Return: Always 0 (Success)
 *
 */
int _printf(const char *format, ...)
{
	int idx, str, i;

	va_list arg;

	va_start(arg, format);

	idx = str = 0;
	while (idx < _strlen(format))
	{
		while (format[idx] != '%' && idx < _strlen(format))
		{
			_putchar(format[idx]);
			idx++;
			str++;
		}
		if (format[idx] == '%')
		{
			idx++;
		}
		switch (format[idx])
		{
			case 'c':
				str += _putchar(va_arg(arg, int));
				break;
			case 'd':
				i = va_arg(arg, int);
				if (i < 0)
				{
					i = -i;
					_putchar('-');
				}
				str += convert(i, 10);
				break;
			case 'o':
				str += convert(va_arg(arg, int), 8);
				break;
			case 's':
				str += _puts(va_arg(arg, char *));
				break;
			case 'x':
				str += convert(va_arg(arg, unsigned int), 16);
				break;
			case 'i':
				i = va_arg(arg, int);
				if (i < 0)
				{
					i = -i;
					_putchar('-');
				}
				str += convert(i, 10);
				break;
			case '%':
				str += _puts("%");
				break;
			default:
				continue;
		}
		idx++;
	}

	va_end(arg);
	return (str);
}
