#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
char *_itoa(int num);
int _strlen(const char *str);
char spec_c(va_list list);
int print_s(va_list list);
int print_perc();
