#include "sort.h"


/**
  * partition - divide array into 2 partition.
  * @array: array to sort.
  * @size: array size.
  * @lo: lower range.
  * @hi: higher range.
  * Return: pivot index.
  */
size_t partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	int pivot = array[hi];
	ssize_t i, j;
	int tmp;

	i = lo;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			if (array[i] != array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[hi])
	{
		tmp = array[i];
		array[i] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i);
}

/**
  * quicksort - quick sort algorithm.
  * @array: array to sort.
  * @size: array size.
  * @lo: lower range.
  * @hi: higher range.
  */
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	ssize_t p;

	if (lo < hi)
	{
		p = partition(array, size, lo, hi);

		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

/**
  * quick_sort - function that sorts an array of integers
  *		in ascending order using the Quick sort algorithm.
  * @array: array to sort.
  * @size: array size.
  */
void quick_sort(int *array, size_t size)
{
	quicksort(array, size, 0, size - 1);
}
