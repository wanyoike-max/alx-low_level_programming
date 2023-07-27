#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of linked list
 * @h: pointer to the list to print
 * Return: no of nodes printed
 */

size_t print_list(const list_h *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
