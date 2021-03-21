#include "header.h"

void add_node(int data, list L)
{
	list last = L;	// Used in line 38
	list new = create_node(data); // Create the new node
	if(L = NULL) // Check if the list is empty
	{
		L = new; // Make the new node as the list
		return ;
	}
	while(last->next != NULL)
		last = last->next; // Traverse the list
	last->next = new;
	return ;
}
