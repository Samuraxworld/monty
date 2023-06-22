/*
 * File_name: rotr.c
 * Created: 21st of june, 2023
 * Auth: Samuel Ugochukwu (Samuraxworld)
 *       Iwuegbulem Daniel Ikechukwu
 * Size: undefined
 * Project: 0x19. C - Stacks, Queues - LIFO, FIFO
 * Status: submitted.
 */

#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
