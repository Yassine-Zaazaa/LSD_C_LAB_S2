#include"header.h"

void print_list(list L)
{
	if(L.head == NULL)
		printf("[]");
	else
	{
		printf("[");
		node * last = L.head; // temporary list to go the last node
		while(last->next != NULL)
		{
			printf("\'%c\', ", last->data);
			last = last->next;
		}
		if(last!=NULL)
			printf("\'%c\'", last->data);
		printf("]\n");
	}
}
