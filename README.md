![instagram_feed180](https://github.com/user-attachments/assets/6ee6244d-5e42-4ec7-9122-8d086b28f423)

# Project Holberton : C - printf

## Description 📄

> [!NOTE]
> This project is a custom '_printf' function that will replicate some of the functionalities of the 'printf'
function from the standard library.
The '_printf' function takes a format of a string defined by 'get_format' function and a variable number of arguments
then it processes the format string and outputs the string(s) with the right format.

## Command of compilation 📥

The compilation command to compile the files that make up the printf function is as follows :

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.`

## Requirements ✅

- [x] Allowed editors : vi, vim, emacs
- [x] Our files compile on Ubuntu 20.04 LTS
- [x] Our code of respect Betty code Style and Betty Doc
- [x] We don't use global variables
- [x] We have no more than five functions per file
- [x] All function prototypes can be found in main.h

## Function Prototype 🤖

`int _printf(const char *format, ...);`

## Parameters ⚙️

`format` : is a pointer to a string that contains the text we want to print to the standard outpout.

`...` : A variable number of arguments that will be printed according to the format specifiers.

## Return Value ⏎

The function returns the number of characters printed, excluding the null character '\0'
if the format of the string is 'NULL', the function returns '-1'.

## Format Specifers Suported by '_printf':

The function '_printf' supports theses format specifiers :

| Selector  |         Description           |
|:---------:|:-----------------------------:|
|  **%c**   |Print a single character       |
|  **%s**   |Print a string of character    |
|  **%%**   |Print a percent character      |
|  **%d**   |Print a decimal number         |
|  **%i**   |Print an integer number        |

## Files 📁

- **_printf.c :**
  
*The main implementation of the '_printf' function.*

- **print_string.c :**

*A function to print a string with the prototype* `int print_string(va_list args)`

- **print_char.c :**

*A function to print a character with the prototype* `int print_char(va_list args)`

- **print_percent :**
*A function to print a percent sign with the prototype* `int print_percent(va_list args)`

- **get_format.c :**
*A function to select the appropriate function for every format specifier with the prototype* `int (*get_format(char type))(va_list)`

- **_putchar.c :**
*A function that write a character to standard output with the prototype* `int _putchar(char c)`

- **main.h :**
*The header file containing all the function prototypes and the struct 'selector'.* 

- **main.c :**
*This is the test function. This will allow us to see if our function executes correctly. Here's an example :*

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

## Error Handling ❌

> [!IMPORTANT]
> If the format string is 'NULL' , the function returns '-1'.
If a forma specifier is not recognized, the function wil continue to process next characters.
If an incomplete formate specifier is found the function returns '-1'

## FlowChart 📊
![FlowChart _printf c drawio](https://github.com/user-attachments/assets/e0423545-7441-4be2-aa6b-93c1ce3507cb)

## Authors 👨🏻‍💻👨🏻‍💻
> [!TIP]
> C#24 : [Antoine LAFITTE](https://github.com/AntoineLAFITTE) & [Thomas MAYE](https://github.com/thomas-maye)

