#include "header.h"

array rand_fill_array(int len)
{
	array L;
	L.len = len;
	L.head = (int *)malloc(len * sizeof(int));
	for(int i= 0; i< len; i++)
		L.head[i] = 1 + rand() % 30;
	return L;
}
