#include "lists.h"

/**
 * pop_listint - deletes  head node of a linked list
 * @head: pointer to  first element in  linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int Num;

	if (!head || !*head)
		return (0);

	Num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (Num);
}

