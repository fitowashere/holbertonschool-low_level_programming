#include "lists.h"

/**
 *add_dnodeint_end- gets input
 *@head: stores input
 *@n: stores input
 *Return: results
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_node;
	dlistint_t *end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}

	temp_node = *head;

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	end_node->prev = temp_node;
	temp_node->next = end_node;

	return (end_node);
}
