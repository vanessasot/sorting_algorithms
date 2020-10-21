#include "sort.h"

/**
 * divisions - Takes an element as pivot and places smaller.
 *
 * @array: Unsorted array.
 * @begin: First index of the array.
 * @end: Last index of the array.
 * @size: Lenght of the array.
 *
 * Return: Index of the pivot.
 */
int divisions(int *array, int begin, int end, size_t size)
{
	int pivot, i, index_p, _switch;

	index_p = begin;
	pivot = array[end];

	for (i = begin; i <= end - 1; i++)
	{
		if (array[i] <= pivot)
		{
			_switch = array[index_p];
			array[index_p] = array[i];
			array[i] = _switch;
			if (array[i] != array[index_p])
				print_array(array, size);
			index_p++;
		}
	}
	_switch = array[end];
	array[end] = array[index_p];
	array[index_p] = _switch;

	if (array[i] != array[index_p])
		print_array(array, size);

	return (index_p);
}

/**
 * quick_sort_rec - Recursion
 *
 * @array: Unsorted array
 * @begin: First index of the array
 * @end: Last index of the array
 * @size: Lenght of the array
 *
 * Return: Index to the pivot
 */
void quick_sort_rec(int *array, int begin, int end, size_t size)
{
	int index_p;

	if (begin < end)
	{
		index_p = divisions(array, begin, end, size);

		quick_sort_rec(array, begin, index_p - 1, size);
		quick_sort_rec(array, index_p + 1, end, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: Unsorted array
 * @size: Lenght ofthe array
 *
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}
