#include "lists.h"

/**
 * add_node- gets input
 * @head: stores input
 * @str: stores str input
 * Return: results
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	int i;
	list_t *size = malloc(sizeof(list_t));
	size->str = strdup(str);

	for (i = 0; size->str[i] != '\0'; i++)
	{
		count++;
	}

	if (str == NULL)
		return (NULL);

	if (size == NULL)
		return (NULL);

	if (size->str == NULL)
	{
		free(size);
		return (NULL);
	}
	size->len = count;
	size->next = *head;
	*head = size;

	return (size);
}
