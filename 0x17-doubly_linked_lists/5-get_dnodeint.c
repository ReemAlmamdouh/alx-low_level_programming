#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer
 * @index: nth node
 * Return: nth node or NULL if doesn't exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (i == index & current != NULL)
{
return (current);
}
else
{
return (NULL);
}
}
