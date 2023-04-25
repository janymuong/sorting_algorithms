#include "sort.h"

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

/**
 * bubble_sort - iteratively steps throug elements,
 * compares the current element with the one after it,
 * swapping values.
 *
 * @array: (arg) array of integers
 * @size:  size of the array, determines inner loop
 *
 * return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}

		if (swapped == 0)
			break;
	}
}
