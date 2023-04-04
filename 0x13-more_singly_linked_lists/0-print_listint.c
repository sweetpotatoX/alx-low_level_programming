#include "lists.h"

/**
 * print_listint_reverse - prints all the elements of a linked list in reverse
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint_reverse(const listint_t *h)
{
if (h == NULL)
return (0);

size_t num = print_listint_reverse(h->next);
printf("%d\n", h->n);
num++;

return (num);
}
