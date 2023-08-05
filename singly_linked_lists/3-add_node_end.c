#include "lists.h"

/**
 * add_node_end- gets input
 * @head: stores input
 * @str: stores str input
 * Return: results
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *list = malloc(sizeof(list_t));
	list_t *end_list = malloc(sizeof(list_t));

	if (str == NULL || list == NULL)
		return (NULL);

	list->str = strdup(str);
	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}

	list->len = strlen(str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	else
	{
		end_list = *head;

		while (end_list->next != NULL)
		{
			end_list = end_list->next;
		}
		end_list->next = list;
	}
	return (end_list);
}
