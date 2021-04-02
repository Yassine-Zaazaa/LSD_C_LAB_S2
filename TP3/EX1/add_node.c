#include"header.h"

void add_node(char data, list *L)
{
	node * new = create_node(data); // Create the new node
	if(L->head == NULL) // Check if the list is empty
	{
		L->head = new;
		L->last = new;
		return ;
	}
	L->last->next = new;
	new->previous = L->last;
	L->last = new;

	return ;
}
