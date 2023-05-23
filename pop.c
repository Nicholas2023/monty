#include "monty.h"


/**
 * op_pop - Removes the top element of @stack
 * @stack: A doubly linked list
 * @line_number: Current line number in monty script file
 *
 */

void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *target;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	target = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}

	free(target);
}
