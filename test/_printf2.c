#include "holberton.h"

/**
 * _printf - trying out a struct instead of switch
 * @format:
 */

int _printf(char *format, ...)
{
	convFunc functionList[] = {
		{"c", funcChar},
		{"s", funcString},
		{"%", funcPercent}, /* percent or modulo? IDK */
		{NULL, NULL}
	};
}

