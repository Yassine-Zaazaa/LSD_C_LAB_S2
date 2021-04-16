#include "stack.h"

int peek_stack(stack * head)
{
	if(is_empty(head) == 1)
		return INT_MIN;
	int res = head->data;
	return res;
}
