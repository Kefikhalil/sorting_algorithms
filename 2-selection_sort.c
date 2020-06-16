#include "sort.h"

void selection_sort(int *array, size_t size)
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
				min = red;
		s = array[min];
		array[min] = array[blue];
		array[blue] = s;
		print_array(array, size);
	}
}
