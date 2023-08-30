#include "list.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next = pre;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
