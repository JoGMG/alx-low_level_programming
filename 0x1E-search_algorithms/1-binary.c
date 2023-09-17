#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array
  *                 of integers using binary search algorithm.
  * @array: pointer to the first element of the array
  *         to search value in.
  * @size: number of elements in array.
  * @value: value to search for.
  *
  * Return: the index where the value is located, else -1 if
  *         value is not present in array or if array is NULL.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = (left + right) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
			
	}

	return (-1);
}
