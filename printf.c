#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	/* if the format is empty it returns error */
	if (format == NULL)
		return (-1);

	va_start(args, format);

	/* calls print_format to print and get the lenght of the string */
	length = _print_format(format, args);
	va_end(args);
	return (length);
}
