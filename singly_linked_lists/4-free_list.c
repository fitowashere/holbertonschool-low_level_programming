#include "lists.h"

/**
 *free_list- gets input
 *@head: stores input
 *Return: results
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		
		free(head);
		head= head->next;
	}
}
