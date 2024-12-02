Proyect: Printf


Description
This project is a custom implementation of the printf function in C. It simulates the behavior of the standard printf function, handling different format specifiers such as %c, %s, %d, %i, and %%. It demonstrates the use of variadic functions, dynamic memory allocation, and string manipulation in C.

Authors

Santiago Fernandez
Camila Romero

Function implemented 

1) _printf 

Output: Writes formatted data to the standard output and returns the total number of characters printed.

2) recorrer_string

Description: A helper function that processes the format string, handling specifiers like %c, %s, %d, %i, and %%. It traverses the format string and calls the appropriate functions to print the corresponding values.

Input: A format string and a list of arguments.

Output: Writes the processed characters or values to the standard output and returns the number of characters printed.

3) manejar_c_s

Description: Handles the %c, %s, and %% format specifiers by printing a character, a string, or a literal %, respectively.

Input: A format specifier and a list of arguments.

Output: Writes the corresponding character or string to the standard output and updates the character count.

4) manejar_casos_i_d

Description: Handles the %d and %i format specifiers by converting an integer to a string and printing it.

Input: A list of arguments (an integer to be printed).

Output: Writes the integer to the standard output, handles special cases like zero and INT_MIN, and updates the character count.

5) contar_digitos

Description: Counts the number of digits in an integer.

Input: An integer.

Output: Returns the number of digits in the integer.

6) crear_espacio

Description: Allocates memory for an integer's string representation based on its size.

Input: An integer and the number of characters needed to store it.

Output: Returns a dynamically allocated string to store the integer, or NULL if memory allocation fails

Requirements:

- C compiler (e.g., GCC)
- Basic knowledge of C programming, including:
- Pointers
- Arrays
- Strings
- malloc and free
- Variadic functions


