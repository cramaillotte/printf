#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/* helper functions puts puchar and strlen */
int _putchar(char c);
int _puts_helper(char *str);
int _strlen(char *s);

/* task 0 c % s */
int print_char(char ch, int *counter);
int print_percent(int *counter);
int print_string(const char *str, int *counter);
void process_char(char ch, int *counter);
void process_string(const char *str, int *counter);
void process_percent(int *counter);
void print_unknown(const char *format, int *counter);

/* main source code file _printf */
int _printf(const char *format, ...);

#endif /* PRINTF_H */
