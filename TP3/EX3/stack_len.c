#include "stack.h"

int stack_len(stack *head)
{
	stack * temp = head;
	int len = 0;
	while(temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return len;
}
