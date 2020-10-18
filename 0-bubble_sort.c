#include "sort.h"
/**
 *bubble_sort - Buble algorithm to sortt an array
 *@array: array to sort
 *@size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, tmp = 0, bubble = size - 1, condition = 1;

	if (array == NULL && size <= 1)
		return;

	while (condition != 0)
	{
		i = 0;
		condition = 0;
		while (i < bubble)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				condition = 1;
			}
			i++;
		}
		bubble--;
	}
}
