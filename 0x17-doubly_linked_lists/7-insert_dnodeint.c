#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts new node at a given position
 * @h: pointer
 * @idx: position to add the next node
 * @n: data of the new node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* create node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t))
		if (new_node == NULL)
			return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL:
		new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    unsigned int i = 0;
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (i == idx - 1 && current != NULL)
    {
        new_node->next = current->next;
        new_node->prev = current;
        if (current->next != NULL)
        {
            current->next->prev = new_node;
        }
        current->next = new_node;
        return new_node;
    }
    else
    {
        free(new_node);
        return NULL;
    }
}
