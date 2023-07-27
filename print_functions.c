#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
  * print_char - prints all the characters given.
  * @args: the list of arguments provided
  *
  * Return: 1.
  */

int print_char(va_list args)
{
	int c = va_arg(args, int);
	putchar(c);
	return (1);
}

/**
  * print_string - prints all the strings given.
  * @args: the list of arguments provided
  *
  * Return: lenght.
  */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int len = 0;
	while (*str) {
		putchar(*str);
		str++;
		len++;
	}
	return (len);
}

/**
  * print_percent - prints all the percents given.
  * @args: the list of arguments provided
  *
  * Return: 1.
  */

int print_percent(va_list args)
{
	putchar('%');
	return (1);
}
