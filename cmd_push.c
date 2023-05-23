#include "monty.h"

/**
  * push - Pushes an element to the stack.
  * @stack: Double pointer to the stack
  * @line_number: The value to adds on the stack
  *
  * Return: Nothing
  */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;

	/*Allocate memory for the new node*/
	node = malloc(sizeof(stack_t));
	if (_node == NULL)
		handle_error(ERR_BAD_MALL, NULL, 0, NULL);
	/*Set the value of the new node*/
	node->n = line_number;
	if (*stack)
	{
		/*If the stack is not empty*/
		node->next = *stack;
		node->prev = (*stack)->prev;
		(*stack)->prev = node;
		*stack = node; /*Update the head of the stack*/
		return;
	}
	/*If the stack is empty*/
	node->next = *stack;
	node->prev = NULL;
	*stack = node;
}

/**
  * push_queue - Adds a new node at the end of the stack
  * @stack: The head of the stack
  * @param: The value to adds on the stack
  *
  * Return: Nothing
  */
void push_queue(stack_t **stack, unsigned int param)
{
	stack_t *current = NULL, *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		handle_error(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;
	if (*stack)
	{
		current = *stack;
		while (current->next != NULL)
			current = current->next;

		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
