#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - adds a new node in the beginning of a linked list
* @head: double pointers to the list_t list
* @str: new string to be added in the node
*
* Return: the address of the new element, or is  NULL if it fails the test
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new )
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}