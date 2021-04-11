#include "header.h"

int is_in(int x, array L)
{
	for(int i = 0; i<L.len; i++)
	{
		if(L.head[i] == x)
			return 1;
	}
	return 0;
}

array remove_duplicates(array  L)
{
	array T;
	T.len = L.len;
	T.head = (int *)malloc(T.len * sizeof(int));
	int j = 0;
	for(int i = 0; i< L.len; i++)
	{
		if(is_in(L.head[i], T) == 0)
		{
			T.head[j] = L.head[i];
			j++;
		}
	}
	array Q;
	Q.len = j;
	Q.head = (int *)malloc(j * sizeof(int));
	for(int i = 0; i < j; i++)
	{
		Q.head[i] = T.head[i];
	}
	return Q;
}
