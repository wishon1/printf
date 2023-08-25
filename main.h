#ifndef MAIN_H
#define MAIN_H
#define LOCAL_BUFFER 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int (*selector(char charac))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int _custom_putchar(int num, int iterate);
int _c_specifier(va_list arg);
int _s_specifier(va_list arg);
int _d_specifier(va_list arg);
int _b_specifier(va_list arg);
int _u_sepecifier(va_list arg);
int _x_specifier(va_list arg);
int _o_specifier(va_list arg);
int _X_specifier(va_list arg);
int _i_specifier(va_list arg);

#endif /* main.h */
