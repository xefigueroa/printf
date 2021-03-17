#include "holberton.h"

/**
 * convert - converts a number to base X
 * @num: number to be converted
 * @base: base to convert to
 * @cap: 0 use bot, 1 use top
 * Return: prints result
 */
int convert(unsigned int num, int base, int cap)
{
	static const char bot[] = "0123456789abcdef";
	static const char top[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;
	int str = 0;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		if (cap == 0)
			*--ptr = bot[num % base];
		else
			*--ptr = top[num % base];
		num /= base;
	} while (num != 0);

	str = _puts(ptr);

	return (str);
}
