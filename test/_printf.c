#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(char *format, ...);
char *convert(unsigned int num, int base);

/**
 *
 *
 *
 */
int _printf(char *format, ...)
{
	char *trv;
	unsigned int i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (trv = format; *trv != '\0'; trv++)
	{
		while(*trv != '%')
		{
			putchar(*trv);
			trv++;
		}
		trv++;

		switch(*trv)
		{
			case 'c' : i = va_arg(arg,int);
					   putchar(i);
					   break;

			case 'd' : i = va_arg(arg,int);
					   /* if(i < 0)
					   {
						   i = -i;
						   putchar('-');
					   } */
					   puts(convert(i,10));
					   break;

			case 'o' : i = va_arg(arg,unsigned int);
					   puts(convert(i,8));
					   break;

			case 's' : s = va_arg(arg,char *);
					   puts(s);
					   break;

			case 'x' : i = va_arg(arg,unsigned int);
					   puts(convert(i,16));
					   break;
		}
	}

	va_end(arg);
	return (0);
}
