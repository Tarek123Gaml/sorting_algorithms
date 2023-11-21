#include "sort.h"

/**
 * bubble_sort - sort array by bubble
 *
 * @array: array that sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j = 0;

	while (j < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		j++;
	}
}
