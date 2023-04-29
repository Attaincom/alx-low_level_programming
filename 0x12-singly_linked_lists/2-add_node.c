#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This is to add news node at the beginning of a linked lists
 * @head: This is to add a double pointer to the list_t list
 * @str: A new string to add in all the nodes
 *
 * Return: the address of the new elements,if  or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

