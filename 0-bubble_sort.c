#include "sort.h"

/**
 * bubble_sort - sorts an array of integer
 * @array: the array
 * @size: the size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
size_t j;
size_t x;

for (i = 0; i < size ; i++)
{
for (j = 0; j < size - 1 - i ; j++)
{
if (array[j] > array[j + 1])
{
x = array[j];
array[j] = array[j + 1];
array[j + 1] = x;
print_array(array, size);
}
}

}




}
