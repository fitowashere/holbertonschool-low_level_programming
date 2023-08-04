#include "lists.h"

/**
 *add_dnodeint- gets input
 *@head: stros input
 *@n: strones int input
 *Return: results
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
