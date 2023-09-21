#include "sort.h"

/**
  * bubble_sort - function that sorts an array of integers
  *	in ascending order using the Bubble sort algorithm.
  * @array: array to be sorted.
  * @size: size of the array.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp, sw = 1;

	if (!array || size < 2)
		return;
	while (sw)
	{
		sw = 0;
		i = 0;
		while (i < size - 1)
		{
			tmp = array[i];
			if (tmp > array[i + 1])
			{
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				sw = 1;
				print_array(array, size);
			}
			i++;
		}
	}
}
