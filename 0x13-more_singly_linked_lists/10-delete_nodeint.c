#include "lists.h"

/**
 * delete_node_at_index - deletes the node at a specific index of a linked list.
 * @head: pointer to a pointer to the head of the list.
 * @index: the index of the node to be deleted.
 *
 * Return: 1 if the node was deleted successfully, -1 otherwise.
 */
int delete_node_at_index(list_t **head, unsigned int index)
{
unsigned int i;
list_t *prev_node, *curr_node, *next_node;
if (*head == NULL)
return (-1);
curr_node = *head;

if (index == 0)
{
*head = curr_node->next;
free(curr_node);
return (1);
}
prev_node = curr_node;
curr_node = curr_node->next;

for (i = 1; curr_node != NULL && i < index; i++)
{
prev_node = curr_node;
curr_node = curr_node->next;
}

if (curr_node == NULL)
return (-1);

next_node = curr_node->next;
prev_node->next = next_node;
free(curr_node);

return (1);
}
