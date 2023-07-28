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
<br>Gi@Gi-Holberton:\~/github/holbertonschool-printf-1$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c<br />
<br>Gi@Gi-Holberton:\~/github/holbertonschool-printf-1$ ./a.out<br />
<br>Let's try to printf a simple sentence.<br />
<br>Let's try to printf a simple sentence.<br />
<br>Length:[39, 39]<br />
<br>Length:[39, 39]<br />
<br>Negative:[-762534]<br />
<br>Negative:[-762534]<br />
<br>Unsigned:[%u]<br />
<br>Unsigned:[2147484671]<br />
<br>Unsigned octal:[%o]<br />
<br>Unsigned octal:[20000001777]<br />
<br>Unsigned hexadecimal:[%x, %X]<br />
<br>Unsigned hexadecimal:[800003ff, 800003FF]<br />
<br>Character:[H]<br />
<br>Character:[H]<br />
<br>String:[I am a string !]<br />
<br>String:[I am a string !]<br />
<br>Address:[%p]<br />
<br>Address:[0x7ffe637541f0]<br />
<br>Percent:[%]<br />
<br>Percent:[%]<br />
<br>Len:[12]<br />
<br>Len:[12]<br />
<br>Unknown:[%r]<br />
<br>Unknown:[%r]<br />

# Members:
<br>Sweety Castro<br />
<br>Kelvin Santana<br />
<br>Giovanni Carmona<br />
