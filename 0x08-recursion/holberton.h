#ifndef __HOLBERTON__
#define __HOLBERTON__

#include <stdio.h>

int wildcmp(char *s1, char *s2);
int is_palindrome(char *s);
int is_prime_number(int n);
int _sqrt_recursion(int n);
int _pow_recursion(int x, int y);
int _strlen_recursion(char *s);
int factorial(int n);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
void set_string(char **s, char *to);
void _puts_recursion(char *s);
int _putchar(char c);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
void print_number(int n);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
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
