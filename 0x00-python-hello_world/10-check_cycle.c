#include "lists.h"

/**
 * check_cycle - the program for checking cycle in linked list
 *
 * @list: linked list to be checked
 * Return: 1 on success, 0 on failure
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
