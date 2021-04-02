#include"header.h"


node * create_node(char data)
{
	node * new = (node *)malloc(sizeof(node)); // Allocate a node
	new->data = data; // Put the data in the node
	new->next = NULL;
	new->previous = NULL;
	return new;
}
