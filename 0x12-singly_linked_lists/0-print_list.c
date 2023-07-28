#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the list _t to print
 * Return: no of nodes printed
 */
size_t print_list(const list_t *h)
{
		size_t s = 0;

			while (h)
			{
				if (!h->str)
					printf("[0] (nil)\n");
				else
					printf("[%u] %s\n", h->len, h->str);
				h = h->next;
				s++;
			}
			return (s);
}

