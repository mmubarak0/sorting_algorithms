#include "sort.h"


/**
  * selection_sort - function that sorts an array of integers
  *		in ascending order using the Selection sort algorithm.
  * @array: array to sort.
  * @size: array size.
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int tmp;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
