#ifndef _PROTOTYPES_H_
#define _PROTOTYPES_H_

/* Stack manipulation functions */
void op_push(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);

/* Stack display */
void op_pall(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);

/* Node interaction */
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);

#endif /* _PROTOTYPES_H_ */
