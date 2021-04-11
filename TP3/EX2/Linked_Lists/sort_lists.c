#include "header.h"

void swap(int * x, int * y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

unsigned len(list L)
{
	unsigned l = 0;
	list temp = L;
	while(temp->next != NULL)
	{
		l++;
		temp = temp->next;
	}
	return l;
}
void sort_list(list * L)
{
	unsigned l = len(*L);
	list temp = *L;
	list temp1 = *L;
	for(int i = 0; i < l; i++)
	{
		temp1 = *L;
		for(int j = 0; j < l-i; j++)
		{
			if(temp1->data > temp1->next->data)
				swap(&(temp1->data), &(temp1->next->data));
			temp1 = temp1->next;
		}
		temp = temp->next;
	}
}
