/*
 * File_name: pint.c
 * Created: 21st of june, 2023
 * Auth: Samuel Ugochukwu (Samuraxworld)
 *       Iwuegbulem Daniel Ikechukwu
 * Size: undefined
 * Project: 0x19. C - Stacks, Queues - LIFO, FIFO
 * Status: submitted.
 */

#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
