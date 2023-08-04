#include "lists.h"

/**
 * insert_dnodeint_at_index- gets input
 * @h: gets input
 * @n: stores input
 * @idx: stores input
 * Return: results
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (new_node == NULL)
			return (NULL);

		idx--;
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node->prev = temp->prev;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;



	return (new_node);

}
