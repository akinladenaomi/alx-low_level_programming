#include "list.h"

/**
 * free_listint - frees a linked list
 * @head: listint: listint_t list to be freed
 */
void free_listin(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
