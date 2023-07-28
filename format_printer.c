#include "main.h"
#include <stdlib.h>

/**
  * _print_format - Prints a format
  * @format: The format to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the format
  */
int _print_format(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		/* It will go through each character in the string until it finds the % for the variable */
		/* if it isnt a % char, else will activate printing the current character we are at */
		if (format[i] == '%')
		{
			/* It will check to see if after the % theres \0 to know if theres a variable letter to use if not; error */
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			/* it will continue checking spaces until finding a letter */
			while (format[i] == ' ')
				i++;

			/* if it finds a second % before a letter it will increase the count */
			if (format[i] == '%')
				count += _putchar(format[i]);

			/* it will call the function that checks to see if the letter is a variable we can use */
			/* if we cant use it, we run print_invalid_spec */
			if (_validate_char(format[i]) == 0)
			{
				/* it will add to the count, the previous char and the current char */
				count = _print_invalid_spec(format[i - 1], format[i], count);
			}
			else
			{
				/* this function will run the funtion that corresponds to the variable we */
				/* found through the validate_char ran in the current if statement */
				count += _print_spec(format[i], args);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}

		i++;
	}

	/* Returns the lenght to the function printf */
	return (count);
}

/**
  * _print_spec - Prints a valid specifier
  * @format: The specifier to prints
  * @args: A list of variadic arguments
  *
  * Return: The length of the specifier
  */
int _print_spec(char format, va_list args)
{
	int i  = 0, length = 0;
	spc_dt _types[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{"b", _print_int_binary},
		{NULL, NULL}
	};

	/* This receives the lenght of the string/character/integer and returns it */
	while (_types[i].specifier)
	{
		if (*_types[i].specifier == format)
			length = _types[i].f(args);

		i++;
	}

	return (length);
}

/**
  * _print_invalid_spec - Prints a invalid specifier
  * @prev_format: The previous specifier of actual specifier
  * @format: The specifier to prints
  * @count: The current count before prints invalid specifiers
  *
  * Return: The current count after prints invalid specifiers
  */
int _print_invalid_spec(char prev_format, char format, int count)
{
	count += _putchar('%');

	if (prev_format == ' ')
	{
		count += _putchar(' ');
		count += _putchar(format);
	}
	else
	{
		count += _putchar(format);
	}

	return (count);
}

/**
  * _validate_char - validate the type
  * @_type: character to be comparate
  *
  * Return: 1 if char is equal to a type
  */
int _validate_char(char _type)
{
	char _types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	/* checks each char in the _types array and compares it to the _type variable to */
	/* determine if the variable we've been provided is a variable type we can use */
	while (_types[i])
	{
		if (_types[i] == _type)
			return (1);
		i++;
	}
	return (0);
}
