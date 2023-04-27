#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free the allocated memory for a list
 *
 * @head: A pointer to the head of the list to free
 */
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
