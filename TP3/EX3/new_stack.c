#include "stack.h"

stack* new_stack(int data)
 {
	 stack *P = (stack *)malloc(sizeof(stack));
	 P->data = data;
	 P->next = NULL;
	 return P;
 }
