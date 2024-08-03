#include "sort.h"

/**
 * selection_sort - sorts an array of int in ascending using Selection sort
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int i, j, k, current;

	if (!array || size <= 1)
		return;
	for (i = 0; i < (int)size - 1; i++)
	{
		current = array[i];
		for (j = i + 1; j <= (int)size - 1; j++)
		{
			if (current > array[j])
			{
				current = array[j];
				k = j;
			}
		}
		if (current != array[i])
		{
			array[k] = array[i];
			array[i] = current;
			print_array(array, size);
		}
	}
}
