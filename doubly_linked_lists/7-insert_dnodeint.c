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
	unsigned int count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

    if (idx == )
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL && idx > 0)
		return (NULL);

	new_node->n = n;

	while (count != idx )
	{
		temp = temp->next;
		count++;
	}


	new_node->prev = temp->prev;
	new_node->next = temp->next;
	temp->next = new_node;



	return (new_node);

}
