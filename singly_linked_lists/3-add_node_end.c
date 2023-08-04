#include "lists.h"

/**
 * add_node_end- gets input
 * @head: stores input
 * @str: stores str input
 * Return: results
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	int i;

	list_t *list = malloc(sizeof(list_t));
	list_t *end_list = malloc(sizeof(list_t));

	list->str = strdup(str);

	if (str == NULL)
		return (NULL);

	if (list == NULL)
		return (NULL);

	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}
    	for (i = 0; list->str[i] != '\0'; i++)
	{
		count++;
	}

	list->len = count;

	if (*head == NULL)
		*head = list;
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
