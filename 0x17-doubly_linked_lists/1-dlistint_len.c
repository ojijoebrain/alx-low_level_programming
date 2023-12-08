#include "lists.h"

/**
 * dlistint_len - returns num of the elements in
 * a double linked list
 *
 * @h: Head of list
 * Return: The num of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
