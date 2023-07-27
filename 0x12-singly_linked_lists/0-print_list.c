#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of linked list
 * @h: pointer to the list to print
 * Return: no of nodes printed
 */

size_t print_list(const list_h *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
