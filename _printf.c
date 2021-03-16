#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int convert(unsigned int num, int base, int cap);

/**
 * _printf - prints stuff :D
 * @format: output modifier to be used
 * Return: str - gives length and stores arguments in cases
 *
 */
int _printf(const char *format, ...)
{
	int idx, str, i;

	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);


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
					str++;
				}
				str += convert(i, 10, 0);
				break;
			case 'o':
				str += convert(va_arg(arg, int), 8, 0);
				break;
			case 's':
				str += _puts(va_arg(arg, char *));
				break;
			case 'x':
				str += convert(va_arg(arg, unsigned int), 16, 0);
				break;
			case 'X':
				str += convert(va_arg(arg, unsigned int), 16, 1);
				break;
			case 'i':
				i = va_arg(arg, int);
				if (i < 0)
				{
					i = -i;
					_putchar('-');
					str++;
				}
				str += convert(i, 10, 0);
				break;
			case '%':
				str += _puts("%");
				break;
			case 'u':
				str += convert(va_arg(arg, int), 10, 0);
				break;
			case 'b':
				str += convert(va_arg(arg, int), 2, 0);
				break;
			default:
				continue;
		}
		idx++;
	}

	va_end(arg);
	return (str);
}
