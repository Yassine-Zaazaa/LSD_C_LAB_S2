#include "header.h"

void print_list(list L)
{
	if(L == NULL)
		printf("[]");
	else
	{
		printf("[%d, ", L->data);
		list last = L->next;
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
