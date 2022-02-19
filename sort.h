#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdint.h>

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

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* Insertion sort */
void insertion_sort_list(listint_t **list);

/* Selection sort */
void selection_sort(int *array, size_t size);

/* Quick sort */
void quick_sort(int *array, size_t size);

/* for sort.h */
void shell_sort(int *array, size_t size);
