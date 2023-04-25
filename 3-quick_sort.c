#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 *             implementation of Quick sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array - determines looping
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		sort_recursive(array, 0, size - 1, size);
	}
}

/**
 * sort_recursive - recursively sorts a partition of an array
 *
 * @array: the array to be sorted
 * @left: the left index half of the partition to be sorted
 * @right: right index half of the partition to be sorted
 * @size: the size of the array
 */
void sort_recursive(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = _split(array, left, right, size);
		sort_recursive(array, left, pivot - 1, size);
		sort_recursive(array, pivot + 1, right, size);
	}
}

/**
 * _split - partitions an array using the Lomuto scheme
 *
 * @array: The array to be partitioned
 * @left: The left index of the partition
 * @right: The right index of the partition
 * @size: The size of the entire array (for printing purposes)
 *
 * Return: fhe final index of the pivot
 */
int _split(int *array, int left, int right, size_t size)
{
	int j;
	int pivot = array[right];
	int i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}

	swap(&array[i + 1], &array[right]);
	print_array(array, size);

	return (i + 1);
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
