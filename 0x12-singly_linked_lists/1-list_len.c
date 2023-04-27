#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Holberton's School students CodeChecker.
 * @h: List's name.
 * Return: nbr of nodes.
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
