#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 *
 *
 *
 */
void convert(unsigned int num, int base)
{
	/* static char top[] = "0123456789ABCDEF"; */
	static char bot[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = bot[num % base];
		num /= base;
	}while(num != 0);

	puts(ptr);
}
