#include "lists.h"

/** 
*print_dlistint- gets input
*@h: stores input
*Return: results
*/

size_t print_dlistint(const dlistint_t *h)
{
return (printf("%d\n", h->n));

}
/* 
size_t pcount = 0, count = 0;

if (h->next == NULL || h->prev == NULL)
return (printf("[0] (nil)"));

while (h->next != NULL)
{
count++;
h = h->next;
}

while (h->prev != NULL)
{
pcount++;
h = h->prev;
}
*/