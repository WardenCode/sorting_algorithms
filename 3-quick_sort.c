#include "sort.h"

/**
 * trade - swaps two integers
 * @a: integer
 * @b: integer
 */
void trade(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = tmp;
}

/**
 * _split - splits the array and takes the last element as pivot
 *  @arr: input array
 *  @first: first element
 *  @last: last element
 *  @size: size
 *  Return: integer
 */
int _split(int *arr, int first, int last, size_t size)
{
	int piv;
	int i = (first);
	int j;

	piv = arr[last];
	for (j = min; j < last; j++)
	{
		if (arr[j] <= piv)
		{
			trade(&arr[i], &arr[j]);

			if (i != j)
				print_array(arr, size);

			i++;
		}
	}

	trade(&arr[i], &arr[last]);
	if (i != j)
	{
		print_array(arr, size);
	}
	return (i);
}

/**
 * quick_sort - ...
 * @array: ...
 * @size: ...
 *
 */
void quick_sort(int *array, size_t size)
{
/**
 * this is going to have a recursive func
 */
}
