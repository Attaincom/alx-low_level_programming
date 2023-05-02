#include "lists.h"

/**
 * free_listint - this is frees a linked list
 * @head: listint_t list is to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

