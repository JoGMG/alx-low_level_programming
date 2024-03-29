#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *                 using the Linear search algorithm.
 * @array: pointer to the first element of the array
 *         to search value in.
 * @size: number of elements in the array.
 * @value: value to search for in the array.
 *
 * Return: the index of the value found, else -1 if value
 *         is not present in array or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
