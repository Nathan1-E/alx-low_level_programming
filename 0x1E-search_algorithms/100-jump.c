#include "search_algos.h"
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
	return (b);
}

/**
* jump_search - Searching a number using jump search
* @array: array to be searched
* @size: size of an array
* @value: value to be searched
* Return: value
*/
int jump_search(int *array, size_t size, int value)
{
	int start, end;

	if (!array)
		return (-1);

	end = sqrt(size);
	start = 0;

	while (array[end] < value && end < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", start, start);
		start = end;
		end += sqrt(size);
		if (start > (int) size)
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", start, start);
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	while (array[start] < value)
	{
		printf("Value checked array[%d] = [%d]\n", start, start);
		start++;

		if (start == find_min(end, size) && start != value)
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", start, start);
	if (array[start] == value)
		return (start);

	return (-1);
}
