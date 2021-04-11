#include "header.h"

list rand_fill_list(int len)
{
	list L = (list)malloc(sizeof(node));
	L->data =1 + rand() % 100;
	L->next = NULL;
	L->previous = NULL;
	int arr[len];
	for(int i = 0; i<len; i++)
	{
		arr[i] = 1+ rand() % 100;
		add_node(arr[i], &L);
	}
	return L;
}
