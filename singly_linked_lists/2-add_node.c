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

	if (str == NULL || size == NULL)
		return (NULL);

	size->str = strdup(str);

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
