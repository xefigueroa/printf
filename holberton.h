#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _strlen(const char *s);
int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int convert(unsigned int num, int base, int cap);
char *rot13(char *s);

#endif
