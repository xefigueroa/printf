#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * convert - converts a number to base X
 * @num: number to be converted
 * @base: base to convert to
 * Return: prints result
 */
int convert(unsigned int num, int base)
{
	static const char bot[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;
	int str = 0;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = bot[num % base];
		num /= base;
	} while (num != 0);

	str = _puts(ptr);

	return (str);
}
