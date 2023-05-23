#ifndef GLB_H
#define GLD_H

/**
 * select_command - selects the opcode and function
 * @line_number: number line of opcode
 * Return: function for opcode
 */
void (*select_command(char **token))(stack_t **stack,
	unsigned int line_number);

void file_open(int argc, char **argv);
void parse_line(void);
void validate_push_opcode(int i, int line_counter, char **commands,
	char *buffer2, stack_t *head);
void call_opcode(int line_counter, stack_t **head);
stack_t *add_dnodeint(stack_t **head, const int n);
stack_t *create_node_with_data(stack_t **head, int number);

#endif /* GLB_H */
