#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *curr = head;
const listint_t *loop = NULL;
while (curr != NULL)
{
count++;
printf("[%p] %d\n", (void *) curr, curr->n);
if (curr > curr->next || curr > loop)
{
printf("-> [%p] %d\n", (void *) curr->next, curr->next->n);
break;
}
if (curr == loop)
break;

if (curr->next == head)
loop = head;

curr = curr->next;
}
if (curr == NULL)
return (count);

exit(98);
}
