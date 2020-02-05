#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 * @array: array of integers to be sorted.
 * @size: size of the array.
 * Return: nothing.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int idx_minval, foud, temp;

	if (size < 2)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		found = 0;
		idx_minval = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[idx_minval])
			{
				idx_minval = j;
				found++;
			}
		}
		if (found != 0)
		{
			temp = array[idx_minval];
			array[idx_minval] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
