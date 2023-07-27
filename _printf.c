#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * _printf - prints all the words given.
  * @format: the type of variable
  * @...: next numbers.
  *
  * Return: Nothing.
  */

int _printf(const char *format, ...)
{
  /* Function pointer array for format functions */
	static format_func_ptr format_functions[] = {
		['c'] = print_char,
		['s'] = print_string,
		['%'] = print_percent
		/* Initialize other elements with NULL if needed */
	};
	va_list args;
	int i, len = 0;

	va_start(args, format);

	for (i = 0; format[i]; i++)
  {
		if (format[i] == '%')
		{
      format_func_ptr func_ptr;
			i++;

			if (format[i] == '\0')
      {
				/* Handle invalid format string */
				break;
			}

			func_ptr = format_functions[(unsigned char)format[i]];

			if (func_ptr != NULL)
      {
				len += func_ptr(args);
			}
      else
      {
				/* Handle unsupported format specifier */
				break;
			}
		} 
    else
    {
			/* Regular character, print it */
			putchar(format[i]);
			len++;
		}
	}

	va_end(args);

	return (len);
}
