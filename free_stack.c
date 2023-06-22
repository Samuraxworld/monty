/*
 * File_name: free_stack.c
 * Created: 21st of june, 2023
 * Auth: Samuel Ugochukwu (Samuraxworld)
 *       Iwuegbulem Daniel Ikechukwu
 * Size: undefined
 * Project: 0x19. C - Stacks, Queues - LIFO, FIFO
 * Status: submitted.
 */

#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
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
