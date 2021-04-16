#include "stack.h"

int	pop(stack **head)
{
	if(is_empty(*head) == 1)
		return INT_MIN;
	int res = (*head)->data;
	stack * temp = *head;
	*head = (*head)->next;
	free(temp);
	return res;
}
