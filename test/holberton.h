#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convFunc - structures for conversion specifiers and functions
 * @convSpec: Conversion Specifiers
 * @f: function based on conversion specifier
 */
struct convFunc
{ /* these are temporary names since im bad at naming variables */
	char *convSpec;
	int (*f)(va_list);
};
typedef struct  convFunc;

int _printf(char *format, ...);
char *convert(unsigned int num, int base);

#endif
