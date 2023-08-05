#include "lists.h"

/**
 * add_node- gets input
 * @head: stores input
 * @str: stores str input
 * Return: results
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *size = malloc(sizeof(list_t));

	size->str = strdup(str);

	if (str == NULL)
		return (NULL);

	if (size == NULL)
	{
		return (NULL);
	}
	if (size->str == NULL)
	{
		free(size);
		return (NULL);
	}

	size->len = strlen(str);
	size->next = *head;
	*head = size;

	return (size);
}
