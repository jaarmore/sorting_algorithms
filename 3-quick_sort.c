#include "sort.h"
/**
 * swap - helper function to swap two integer values
 * @elem_a: first element to swap
 * @elem_b: second element to swap
 * Return: nothing.
*/
void swap(int *elem_a, int *elem_b)
{
	int aux;

	aux = *elem_a;
	*elem_a = *elem_b;
	*elem_b = aux;
}
/**
 * partition - function that gets a pivot in the right position
 * @array: array of integers
 * @low: the first position
 * @hig: the last position
 * @size: size of the array
 * Return: the best position in the array to pivot.
*/
size_t partition(int *array, size_t low, size_t hig, size_t size)
{
	size_t pivot;

	for (pivot = low; pivot < hig; pivot++)
	{
		if (array[pivot] < array[hig])
		{
			if (pivot != low)
			{
				swap(&array[low], &array[pivot]);
				print_array(array, size);
			}
			low++;
		}
	}
	if (array[low] > array[hig])
	{
		swap(&array[low], &array[hig]);
		hig = low;
		print_array(array, size);
	}
	return (hig);
}
/**
 * sort - Function to sorting a partitioned array
 * @array: pointer to array to be sorted
 * @start: first element of array
 * @end: last element of array
 * @size: size of array
 * Return: sorted partitions of array
 */
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pIndex;

	if (end == 0 || end <= start)
		return;
	pIndex = partition(array, start, end, size);
	if (pIndex != 0 && pIndex > start)
		sort(array, start, pIndex - 1, size);
	if (pIndex < size - 1)
		sort(array, pIndex + 1, end, size);
}
/**
 * quick_sort - function to sort an array of integer
 * using quick sort algorithm and Lomoto Scheme
 * @array: array of integer to sort
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort(array, 0, (size - 1), size);
}
