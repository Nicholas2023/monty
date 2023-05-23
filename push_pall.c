#include "monty.h"

/**
 * op_push - Push a node on top of a stack
 * @stack: A doubly linked list
 * @line_number: Current line number in monty script file
 *
 */

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	unsigned int size;
	int number;

	if (global.value == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	size = atoi(global.value) <= 0 ? 1 : 0;
	number = abs(atoi(global.value));
	while (number > 0)
	{
		number /= 10;
		size++;
	}
	if (size != strlen(global.value))
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = atoi(global.value);
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
	global.head = new;
}
