#include"header.h"

list create_node(int data)
{
	list new = (node *)malloc(sizeof(node)); // Allocate a node
	new->data = data; // Put the data in the node
	new->next = NULL;
	return new;
}
