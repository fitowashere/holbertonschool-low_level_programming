#include "lists.h"

/**
 *free_dlistint- gets input
 *@head: stores input
 *Return: results
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
