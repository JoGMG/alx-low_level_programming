#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted array of
  *                        integers using interpolation search algorithm.
  * @array: pointer to the first element of the array to search in.
  * @size: number of elements in array.
  * @value: value to search for.
  *
  * Return: the first index where the value is located, otherwise
  *         -1 if the value is not present or the array is NULL.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; low <= high;)
	{
		i = low + (value - array[low]) * (((double)(high - low) \
		/ (array[high] - array[low])));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] < value)
			low = i + 1;
		else if (array[i] > value)
			high = i - 1;
		else
			return (i);
	}

	return (-1);
}
