#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts node to linked list
 *
 * @head: Pointer to the first node.
 * @number: Number or data 
 * Return: return poniter on success and NULL if fail
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *curr = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = number;
	if (*head == NULL || curr->n >= number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (curr->next)
	{
		if (curr->n <= number && curr->next->n >= number)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next;
	}
	if (!curr->next)
	{
		new_node->next = curr->next;
		curr->next = new_node;
	}

	return (new_node);
}
