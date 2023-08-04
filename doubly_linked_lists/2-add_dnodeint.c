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
 /*dlistint_t *temp = *head;*/

if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;


if (*head != NULL)
    (*head)->prev = new;

return (new);

}
