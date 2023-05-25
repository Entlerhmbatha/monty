#include "monty.h"
/**
* free_stack -ikhulula idoubly linked list
* @head: ikhanda lestack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
