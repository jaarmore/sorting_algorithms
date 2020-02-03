#include "sort.h"
/**
 * bubble_sort - implements bubble sort algorithm in ascending order
 * @array: array of integer to be sorted
 * @size: size of array.
 * Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux, swap;

	if (size < 2)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		swap = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				swap = 1;
			}
			if (swap != 0)
				print_array(array, size);
		}
	}
}
