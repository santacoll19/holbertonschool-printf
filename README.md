# Printf C Proyect Team_Work_Group for friday July 28, 2023

# Description
This funtion will recreate the function of the original printf.
As long as you the user provides the variable after a %.

# main.h:
Is the header file that initializes all the functions.

# extra_printers.c:
Prints any variable that falls under the cateregory of binary.

# prints.c:
Prints any variable that is a character, string, integer.

# format_printer.c:
It contains the function print_format, that counts the lenght of the strings/characters given by the user input.
The function print_spec determines what kind of variable was provided by the user input, and in case that the variable is invalid
the invalid_spec function will count the length of the string without knowing the type of variable it is.
And validate character will confirm that the type of variable that the funtion determined is correct.

# printf.c:
Will provide the arguments/strings of characters received to the other functions and return the lenght of the string provided.

# Example-Run
Gi@Gi-Holberton:~/github/holbertonschool-printf-1$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
Gi@Gi-Holberton:~/github/holbertonschool-printf-1$ ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]

# Members:
Sweety Castro
Kelvin Santana
Giovanni Carmona
