#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * ass_node - adds a new node at begining of linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in node
 * Return: address of the new element
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
	
	new-> = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
