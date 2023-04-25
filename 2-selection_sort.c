#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  the selection sort algorithm
 *
 * @array: array of integers to sort
 * @size: size of the array - determines looping
 *
 * return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			swap(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps elements based on a comparison operator
 *
 * @xp: pointer to base element
 * @yp: pointer to comparison element(to swap with)
 *
 * return: void
 */
void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
