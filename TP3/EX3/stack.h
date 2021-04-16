#ifndef STACK_H
# define STACK_H

// Include the necessary libraries
# include <stdlib.h>
# include <stdio.h>
# include <limits.h> // Contains INT_MIN definition
// The stack struct
typedef struct s_stack
{
	int	data;
	struct s_stack *next;
}stack;

/* ************************************************************************** */
/*                        STACK FUNCTIONS                                     */
/* ************************************************************************** */
stack *new_stack(int data);
int	is_empty(stack *head);
void push(stack **head, int data);
int	pop(stack **head);
int stack_len(stack *head);
int	peek_stack(stack *head);
void print_stack(stack *head);
#endif
