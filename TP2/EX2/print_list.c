#include"header.h"

void print_list(list L)
{
	if(L == NULL)
		printf("[]");
	else
	{
		printf("[");
		list last = L; // temporary list to go the last node
		while(last->next != NULL)
		{
			printf("%d, ", last->data);
			last = last->next;
		}
		if(last!=NULL)
			printf("%d", last->data);
		printf("]\n");
	}
}
