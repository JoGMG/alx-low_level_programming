#include "search_algos.h"

/**
  * _binary_search - searches for a value in a sorted array
  *                  of integers using binary search algorithm.
  * @array: pointer to the first element of the array to search in.
  * @left: start index of array to search.
  * @right: last index of array to search.
  * @value: value to search for.
  *
  * Return: the first index where the value is located, otherwise
  *         -1 if the value is not present or the array is NULL.
  */
int _binary_search(int *array, int value, size_t left, size_t right)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
  * exponential_search - searches for a value in a sorted array of
  *                      integers using exponential search algorithm.
  * @array: pointer to the first element of the array to search in.
  * @size: number of elements in array.
  * @value: value to search for.
  *
  * Return: the first index where the value is located, otherwise
  *         -1 if the value is not present or the array is NULL.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] < value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, value, i / 2, right));
}
