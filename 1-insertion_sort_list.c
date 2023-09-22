#include "sort.h"

/**
  * insertion_sort_list - function that sorts a doubly linked list of integers
  *		in ascending order using the Insertion sort algorithm
  * @list: doubly linked list.
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *next = NULL;
	listint_t *p;

	if (!list || !head || !(head->next))
		return;
	p = head;
	while (p)
	{
		next = p->next;

		while (next && p->n > next->n)
		{
			p->next = next->next;
			if (next->next)
				next->next->prev = p;
			next->next = p;
			next->prev = p->prev;
			if (p->prev)
				p->prev->next = next;
			else
				*list = next;
			p->prev = next;

			/* move backward */
			if (next->prev)
				p = next->prev;
			else
				p = next;

			print_list(*list);
		}

		p = p->next;
	}
}
