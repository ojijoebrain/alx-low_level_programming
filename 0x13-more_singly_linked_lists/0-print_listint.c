#include "lists.h"

/**
 * print_listint-Prints all  elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t Num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		Num++;
		h = h->next;
	}

	return (Num);
}


