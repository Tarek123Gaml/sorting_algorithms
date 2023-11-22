#include "sort.h"

/**
 * selection_sort - sort array by selection method
 * @array: array that sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, min_indx;

	for (i = 0; i < size - 1; i++)
	{
		min_indx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_indx])
				min_indx = j;
		}
		if (min_indx != i)
		{
			tmp = array[i];
			array[i] = array[min_indx];
			array[min_indx] = tmp;
		}
		print_array(array, size);
	}
}
