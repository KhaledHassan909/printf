#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
char *_itoa(int num);
int _strlen(char *str);
void handle_percent(void);
void handle_char(va_list args);
void handle_int(int value);
void handle_str(va_list args);

#endif
