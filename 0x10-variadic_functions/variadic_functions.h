#ifndef __HOLB__
#define __HOLB__

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
