/*
 * File_name: pop.c
 * Created: 21st of june, 2023
 * Auth: Samuel Ugochukwu (Samuraxworld)
 *       Iwuegbulem Daniel Ikechukwu
 * Size: undefined
 * Project: 0x19. C - Stacks, Queues - LIFO, FIFO
 * Status: submitted.
 */

#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
