#include "header.h"

void print_array(array L)
{
	if(L.head == NULL)
	{
		printf("[]");
		return ;
	}
	printf("[");
	for(int i = 0; i < L.len-1; i++)
	{
		printf("%d, ", L.head[i]);
	}
	printf("%d]\n", L.head[L.len-1]);
}
