#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
	int data;
	struct node * next;
	struct node * previous;
} node;

typedef struct node * list;

list rand_fill_list(int len);
void add_node(int x,list * L);
void print_list(list L);
void sort_list(list * L);
list merge_lists(list L, list R);
void remove_duplicates(list * L);
unsigned len(list L);
void remove_node(list *L, int index);

#endif
