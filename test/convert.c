#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 *
 */
char *convert(unsigned int num, int base)
{
	static char rep[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = rep[num % base];
		num /= base;
	}while(num != 0);

	return(ptr);
}
