#include "header.h"

array merge_arrays(array L, array T)
{
	array P;
	P.len = L.len + T.len;
	P.head = (int *)malloc(P.len * sizeof(int));
	for(int i = 0; i < L.len; i++)
		P.head[i] = L.head[i];
	for(int i = 0; i < T.len; i++)
		P.head[L.len + i] = T.head[i];
	return P;
}
