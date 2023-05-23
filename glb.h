#ifndef GLB_H
#define GLD_H

typedef struct global_s
{
	char *op_name;
	char *value;
	stack_t *head;
} global_t;

extern global_t global;

#endif /* GLB_H */
