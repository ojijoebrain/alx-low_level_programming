#include "search_algos.h"

/**
  * linear_search - Searches for value in  array
  *                  using linear search.
  * @array: Pointer to  first element of  array to search.
  * @size: Number of the elements in the array.
  * @value: Value to the search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: To Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
