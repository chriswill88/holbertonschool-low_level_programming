#ifndef __HOLBABY__
#define __HOLBABY__

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void switchy(listint_t **list, listint_t *a, listint_t *insert, int n);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int part(int *arr, size_t hi, size_t lo, size_t size);
void quicksort(int *arr, size_t hi, size_t lo, size_t size);
void shell_sort(int *array, size_t size);

#endif
