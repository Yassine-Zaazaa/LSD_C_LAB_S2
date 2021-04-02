#include"header.h"


list string_to_list(size_t size, char * arr)
{
	list L = {NULL, NULL}; // Create a node with the first element of the array
	for(int i=0; i < size; i++)
	{
		add_node(arr[i], &L); // Add a node at the end that represents the i-th element
	}
	return L;
}
