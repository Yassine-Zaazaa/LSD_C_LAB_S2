#include"header.h"

list array_to_list(int size, int arr[])
{
	list L = create_node(arr[0]); // Create a node with the first element of the array
	for(int i=1; i < size; i++)
	{
		add_node(arr[i], L); // Add a node at the end that represents the i-th element
	}
	return L;
}
