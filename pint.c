#include "monty.h"


/**
 * op_pint      - Print value at top of the stack
 *
 * @stack:        A doubly linked list
 * @line_number:  Current line number in monty script file
 */

void op_pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
