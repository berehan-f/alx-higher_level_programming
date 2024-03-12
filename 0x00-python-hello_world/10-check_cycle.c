#include "lists.h"

/**
 * check_cycle - check if listint_t linked list has a cycle in it.
 * @list: pointer to head of listint_t linked list
 * Return: 1 if there is a cycle, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *first, *second;

	if (!list)
	{
		return (0);
	}
	first = list;
	second = list->next;
	while (second && first && second->next)
	{
		if (first == second)
		{
			return (1);
		}
		first = first->next;
		second = second->next->next;
	}
	return (0);
}
