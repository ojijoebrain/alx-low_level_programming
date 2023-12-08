#include "lists.h"

/**
 * sum_dlistint - Returns all the sum of  data (n)
 * of a doubly linked list
 *
 * @head: Head list
 * Return: Sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
