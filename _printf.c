#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
void convert(unsigned int num, int base);

/**
 * _printf - prints stuff :D
 * @format: output modifier to be used
 * Return: Always 0 (Success)
 *
 */
int _printf(const char *format, ...)
{
	unsigned int idx;

	va_list arg;
	va_start(arg, format);

	idx = 0;
	while (idx < strlen(format))
	{
		while(format[idx] != '%')
		{
			putchar(format[idx]);
			idx++;
		}
		if (format[idx] == '%')
			idx++;

		switch(format[idx])
		{
			case 'c' : putchar(va_arg(arg, int));
					   break;

			case 'd' : convert(va_arg(arg, int), 10);
					   break;

			case 'o' : convert(va_arg(arg, int), 8);
					   break;

			case 's' : puts(va_arg(arg,char *));
					   break;

			case 'x' : convert(va_arg(arg,unsigned int), 16);
					   break;

			default:
					   continue;
		}
		idx++;
	}

	va_end(arg);
	return (0);
}