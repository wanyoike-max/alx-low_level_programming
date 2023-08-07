#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - prints all elememts of linked list
 * @h: pointer to the list to print
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
=======
 *  * print_list - prints all the elements of a linked list
 *   * @h: pointer to the list_t list to print
 *    *
 *     * Return: the number of nodes printed
 *      */
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
>>>>>>> b73f257cc4295b92446c70305aef77884de318e3
}
