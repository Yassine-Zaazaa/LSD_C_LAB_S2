#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char  data;
	struct node * next;
	struct node * previous;
} node;
typedef struct list{
	node * head;
	node * last;
} list;

void add_node(char data, list * L);
list array_to_list(char * arr);
node * create_node(char data);
void remove_node(list *L, int index);
void print_list(list L);
list string_to_list(size_t size, char * arr);
unsigned len(list L);
char * listArray(list L);

#endif
