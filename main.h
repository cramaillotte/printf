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
int _print_char(char *buf, int buf_i, char ch, int *len);
int _print_percent(int *c);
int _print_string(char *s, int *c);

/* task 1 spec: d and i */
int _print_int(char *buf, int buf_i, int n, int *len);

/* task 2 */
int _print_binary(char *buf, int buf_i, unsigned int n, int *len);

/* task 3 */
int _print_unsigned(char *buf, int buf_i, unsigned int n, int base, int uppercase, int *len);

/* task 5 */
int _print_non_string(char *buf, int buf_i, char *s, int *len);
int _print_hex(char *buf, int buf_i, unsigned int n, int uppercase, int *len);

/* task 6 */
int _print_pointer(char *buf, int buf_i, void *p, int *len);

/* task 13 */
int _print_reversed(char *s);

/* main source code file _printf */
int _printf(const char *format, ...);

#endif /* MAIN_H */
