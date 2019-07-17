#ifndef __HOLBERTON__
#define __HOLBERTON__

#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *a);
char *leet(char *a);
char *cap_string(char *a);
char *string_toupper(char *a);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void print_triangle(int size);
void print_square(int size);
void print_diagonal(int n);
void print_line(int n);
void more_numbers(void);
void print_most_numbers(void);
void print_numbers(void);
int _isdigit(int c);
int mul(int a, int b);
void print_times_table(int n);
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int a);
int print_last_digit(int a);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
int _isupper(int c);

#endif
