#include "stack.h"

void print_stack(stack *head)
{
	if(is_empty(head) == 1)
	{
		printf("[]\n");
		return ;
	}
	printf("[");
	stack * temp = head;
	while(temp->next != NULL)
	{
		printf("%d, ", temp->data);
		temp = temp->next;
	}
	printf("%d]\n", temp->data);
}
