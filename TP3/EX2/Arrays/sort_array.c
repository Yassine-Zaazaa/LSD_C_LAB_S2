#include "header.h"

void swap(int * x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort_array(array * L)
{
	for(int i = 0; i < L->len; i++)
	{
		for(int j = 0; j < L->len-i; j++)
		{
			if(L->head[j] > L->head[j+1])
				swap(&L->head[j], &L->head[j+1]);
		}
	}
}
