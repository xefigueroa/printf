# _printf
# SYNOPSIS

```
#include  "holberton.h"
"int _printf(const char *"format ", ...);
```

#### Whereas [format] contains the conversion specifier or format to print output and [...] are the number of arguments included to variadic function.

#### Holberton Group Project to write an implementation of our own printf function. Produces formatted output.
## DESCRIPTION
> Recreation of printf function, following Holberton School specifications, from the standard library. 
>> _printf() will generate an output based on a format specified and will write the output into the standard output
>>>Header file "holberton.h" necessary to use function.

### Some of the general requirements are:

*    Allowed editors: vi, vim, emacs
*    All your files will be compiled on Ubuntu 14.04 LTS
*    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
*    All your files should end with a new line
*    A README.md file, at the root of the folder of the project is mandatory
*    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
*    You are not allowed to use global variables
*    No more than 5 functions per file
*    The prototypes of all your functions should be included in your header file called holberton.h
*    Don’t forget to push your header file
*    All your header files should be include guarded
*    Note that we will not provide the _putchar function for this project

## Authorized functions and macros:

| Macro  | Resource |
| ------------- |:-------------:|
| write      | (man 2 write)     |
| malloc      | (man 3 malloc)     |
| free      | (man 3 free)     |
| va_start      | (man 3 va_start)     |
| va_end      | (man 3 va_end)     |
| va_copy    | (man 3 va_copy)     |
| va_arg     | (man 3 va_arg)     |



### Conversion Specifiers:

> A character that specifies the type of conversion to be applied.  The conversion specifiers used in our function are:

*              %c
 * Prints a character.

*             %s
 * Prints a string.

*              %%
 * Prints a % (Percentage or modulo sign).

*              %d
 * Prints a signed decimal integer.

*              %i
 * Prints a integer.

*              %b
 * Prints an unsigned int converted to binary.

*              %u
 * Prints unsigned decimal integer.

*              %o
 * Prints number converted to octal.

*              %x
 * Prints number converted to hexadecimal (lowercase).

*              %X
 * Prints number converted to hexadecimal (uppercase).

# EXAMPLE

```
int main(void)

{

        int var

        var = _printf("Hello");

        _printf("%d\n", var);

        return (0);

}
```
# RETURN/EXIT VALUES
if format == NULL then _printf() returns -1. Otherwise it will return length of stting or conversion specifier.

# SEE ALSO
.I printf(3), stdarg(3)

# BUGS
Two checkers are missing from task 0 of proyect printf. Further research required. Will update promptly.

# AUTHOR
David Harvey & Xavier Figueroa
 
