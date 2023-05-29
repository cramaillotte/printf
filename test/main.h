#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/* helper functions _pputs _putchar and _strlen */
int _putchar(char ch);
int _pputs(char *s);
int _strlen(char *s);



/* task 0 specfiers: c, %, s */
int _print_char(char ch, int *c);
int _print_percent(int *c);
int _print_string(char *s, int *c);



/* main source code file _printf */
int _printf(const char *format, ...);

#endif /* MAIN_H */
