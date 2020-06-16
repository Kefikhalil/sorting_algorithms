#include "sort.h"

/**
 * velection_sort - sorts an array of integers
 * @array: an array of integers
 * @size: the size of the array
 *
 * Return: void
 */

id selection_sort(int *array, size_t size)
{
	size_t red;
	size_t blue;
	size_t min;
	size_t s;

	for (red  = 0; red < size; red++)
	{
		min = red;
		for (blue = red; blue < size; blue++)
			if (array[blue] < array[min])
				min = blue;
		if (min == red)
			continue;
		s = array[min];
		array[min] = array[red];
		array[red] = s;
		print_array(array, size);
	}
}
