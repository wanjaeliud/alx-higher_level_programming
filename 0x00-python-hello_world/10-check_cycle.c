#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check if a singly linked list has a cycle in it
 * @list: singly linked list
 *
 * Return: 0 if there's no cycle and 1 if there's a cycle
 *
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;											}
	return (0);
}
