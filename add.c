#include "monty.h"

/**
 * op_add - Adds the top two elements of @stack
 * @stack: A doubly linked list
 * @line_number: Current line number in monty script file
 */

void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *target;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	target = *stack;
	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;

	free(target);
}
