#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct array
{
	int len;
	int * head;
} array;

array rand_fill_array(int len);
void print_array(array L);
void sort_array(array * L);
array merge_arrays(array L, array T);
array remove_duplicates(array  L);
int is_in(int x, array L);

#endif
