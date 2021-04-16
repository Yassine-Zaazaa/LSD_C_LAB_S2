#include "stack.h"

int main()
{
	stack *P = new_stack(5);
	printf("%d\n", is_empty(P));
	print_stack(P);
	push(&P, 4);
	print_stack(P);
	printf("%d\n", stack_len(P));
	printf("%d\n", pop(&P));
	print_stack(P);
	stack *L = NULL;
	printf("%d\n", pop(&L));
	printf("%d\n", peek_stack(P));
	print_stack(P);

	return 0;
}
