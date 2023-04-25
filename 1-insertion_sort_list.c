#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list insertion sort.
 *
 * @list: (pointer) the head of the doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node, *prev_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr_node = (*list)->next;
	while (curr_node != NULL)
	{
		prev_node = curr_node->prev;
		while (prev_node != NULL && prev_node->n > curr_node->n)
		{
			if (prev_node->prev != NULL)
			{
				prev_node->prev->next = curr_node;
			}
			else
				*list = curr_node;

			if (curr_node->next != NULL)
			{
				curr_node->next->prev = prev_node;
			}

			prev_node->next = curr_node->next;
			curr_node->prev = prev_node->prev;
			prev_node->prev = curr_node;
			curr_node->next = prev_node;

			prev_node = curr_node->prev;
			print_list(*list);
		}

		curr_node = curr_node->next;
	}
}
