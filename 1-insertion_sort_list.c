#include "sort.h"

/**
 * insertion_sort_list - 
 *
 * @list: 
 *
 * Return: Void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL, *node = NULL, *holder = NULL;
	listint_t *tmp = NULL;

	if (!list || !(*list))
		return;

	head = *list;
	if (head->next == NULL)
		return;

	for (node = head; node; node = node->next)
	{
		if (node->next && (node->n > node->next->n))
		{
			holder = node->next;
			for (tmp = holder; tmp->prev; tmp = tmp->prev)
				if (tmp->prev->n < tmp->n)
				{
					node = *list;
					break;
				}

			if (holder->next && holder->prev)
			{
				holder->prev->next = holder->next;
				holder->next->prev = holder->prev;
			}
			else
			{
				holder->prev->next = NULL;
			}

			holder->next = tmp;

			if (tmp->prev)
			{
				tmp->prev->next = holder;
				holder->prev = tmp->prev;
				tmp->prev = holder;
			}
			else
			{
				tmp->prev = holder;
				holder->prev = NULL;
				*list = holder;
			}
			print_list(*list);
		}
	}
}
