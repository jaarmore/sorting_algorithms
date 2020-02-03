# sorting_algorithms
Project 0x1B. C - Sorting algorithms &amp; Big O
This project is about how to choose the best sorting algorithm.

## General
At least four different sorting algorithms
+ What is the Big O notation, and how to evaluate the time complexity of an algorithm
+ How to select the best sorting algorithm for a given input
+ What is a stable sorting algorithm

## Requirements
+ Allowed editors: `vi, vim, emacs`
+ All your files will be compiled on `Ubuntu 14.04 LTS`
+ Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project, is mandatory
+ Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
+ The prototypes of all your functions should be included in your header file called sort.h
+ A list/array does not need to be sorted if its size is less than 2.

## Data Structure and Functions
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

```
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
```

### File: 0-bubble_sort.c, 0-O
Function that sorts an array of integers in ascending order using the Bubble sort algorithm

### File: 1-insertion_sort_list.c, 1-O
Function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.

### File: 2-selection_sort.c, 2-O
Function that sorts an array of integers in ascending order using the Selection sort algorithm

### File: 3-quick_sort.c, 3-O
Function that sorts an array of integers in ascending order using the Quick sort algorithm

### AUTHOR
**Jackson Moreno**
