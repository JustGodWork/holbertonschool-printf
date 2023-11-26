
# _printf function

This project consists of a recodification of the `printf` function in the C language. The `printf` function is widely used to display formatted text in the console. As an exercise to Holberton School, the aim of this project is to understand the inner workings of the standard `printf` function in the C library.

**Prototype:** int _printf(const char *, ...);

## Mandatory Tasks

- Write function that produces output with conversion specifiers c, s, and %.
- Handle conversion specifiers d, i.
- Create a man page for your function.


## Requirements

- Allowed editors: vim or emacs.
- All the files will be compiled on Ubuntu 20.04 LTS using gcc.
- The code should use the betty style.
- Global variables are not allowed.
- No more than 5 functions per file.
- The prototypes of all the functions should be included in the header file called main.h.
- The header files should be include guarded.
- The code will be compiled this way: ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c```


## Flowcharts

![Flowcharts](https://raw.githubusercontent.com/JustGodWork/holbertonschool-printf/main/flowchart.png)

## Specifiers

Specifiers are used to define the display format of variables in the `_printf` function. Here is a list of the specifiers available in this code:

| Specifiers | Description                           |
| ------------- | ------------------------------------- |
| `%c`          | Prints a single character           |
| `%s`          | Print a null-terminated string |
| `%%`          | Print a literal '%' character     |
| `%d`          | Print a decimal number            |
| `%i`          | Print an integer              |


## Exemples
**Input**
```c
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

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = _printf("Let's try to printf an other one.\n");
    _printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len2);


    return (0);
}
```
**Output**
```c
Let's try to printf a simple sentence.
Let's try to printf an other one.
Length:[34, 34]
Negative:[-762534]
Character:[H]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
```

## File Descriptions

| FILE | DESCRIPTION |
| --------- | --------- |
| _printf.c| Contain the main _printf function |
| _putchar.c | A function that print a single chararacter in the standard output |
| handlers.c | Contain the functions whitch corresponds to the specifier |
| main.h| Contain libraries, structure and function prototypes |
| parser.c | the function that processes a specifier if it finds one |
| specifier_handler.c | Contain the function which get the function whitch corresponds to the specifier |
| man_3_printf | Man page of the _printf function|
| resources | Contain the Flowcharts and the main function we use to test the program|

## Authors

- [@Elie Fétis](https://github.com/JustGodWork)
- [@Adonis Riahi](https://github.com/Adolberton)

