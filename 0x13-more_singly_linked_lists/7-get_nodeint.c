#include "lists.h"

/**
 * get_nodeint_at_index - to  returns the node at a certain index in a linked list
 * @head: a first node in the linked list
 * @index: this is the  index of the node to return
 *
 * Return: a pointer to the node that we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

