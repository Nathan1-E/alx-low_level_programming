#include "search_algos.h"

#define PRINT_CHECKED(idx, item) \
	printf("Value checked array[%lu] = [%d]\n", (idx), (item))

#define PRINT_BOUNDED(low, high) \
	printf("Value found between indexes [%lu] and [%lu]\n", (low), (high))

/**
 * find_mid - Finds the min value
 * @a: integer
 * @b: integer
 * Return: min value
 */
int find_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b - 1);
}

/**
 * jump_search - search for a value in a sorted array of integers
 * @array: the array of values
 * @size: the number of values
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;

	if (array)
	{
		while (j < size && array[j] < value)
		{
			PRINT_CHECKED(j, array[j]);
			i = j, j += 3;
		}
		PRINT_BOUNDED(i, j);
		
		while ((int) i <= find_min(j, size))
		{
			PRINT_CHECKED(i, array[i]);
			if (array[i] == value)
				return (i);
			++i;
		}
	}
	return (-1);
}
