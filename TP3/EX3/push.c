#include "stack.h"

void push(stack **head, int data)
{
	stack * new = new_stack(data);
	new->next = *head;
	*head = new;
}
