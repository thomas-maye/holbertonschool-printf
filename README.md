# Project Holberton : C - printf

## Description

This project is a custom '_printf' function that will replicate some of the functionalities of the 'printf'
function from the standard library.
The '_printf' function takes a format of a string defined by 'get_format' function and a variable number of arguments
then it processes the format string and outputs the string(s) with the right format.

## Command of compilation

The compilation command to compile the files that make up the printf function is as follows :

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.`

## Requirements



## Function Prototype

`int _printf(const char *format, ...);`

### Parameters

`format`: is a pointer to a string that contains the text we want to print to the standard outpout.

`...` : A variable number of arguments that will be printed according to the format specifiers.

### Return Value

The function returns the number of characters printed, excluding the null character '\0'
if the format of the string is 'NULL', the function returns '-1'

## Format Specifers Suported by '_printf':

The function '_printf' supports theses format specifiers:

|       |                               |
|:-----:|:-----------------------------:|
|**%c** | Print a single character      |
|       |                               |
|       |                               |
|       |                               |
|       |                               |
|       |                               |
|       |                               |
|
|**%c** : Prints a single character.
|
|**%s** : Prints a string of characters.
|
|**%%** : Prints a percent sign.
|
|**%d** : Prints a .
|
|**%i** : Prints a percent sign.

## Files

**_printf.c** : The main implementation of the '_printf' function.

**print_string.c** : A function to print a string.

**print_char.c** : A function to print a character.

**print_percent** : A function to print a percent sign.

**get_format.c** : A function to select the appropriate function for every format specifier.

**_putchar.c** : Function that write a character to standard output.

**main.h** : The header file containing all the function prototypes and the struct 'selector'. 

## Error Handling

If the format string is 'NULL' , the function returns '-1'.

If a forma specifier is not recognized, the function wil continue to process next characters.

If an incomplete formate specifier is found the function returns '-1'

![_printf_flow_chart](https://github.com/thomas-maye/holbertonschool-printf/blob/29702fff29ff52cfa193d2584e130135fbeb1a33/FlowChart%20_printf.c.drawio)
