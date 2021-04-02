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

void add_node(char data, list *L)
{
	node * new = create_node(data); // Create the new node
	if(L->head == NULL) // Check if the list is empty
	{
		L->head = new;
		L->last = new;
		return ;
	}
	L->last->next = new;
	new->previous = L->last;
	L->last = new;

	return ;
}

node * create_node(char data)
{
	node * new = (node *)malloc(sizeof(node)); // Allocate a node
	new->data = data; // Put the data in the node
	new->next = NULL;
	new->previous = NULL;
	return new;
}


list string_to_list(size_t size, char * arr)
{
	list L = {NULL, NULL}; // Create a node with the first element of the array
	for(int i=0; i < size; i++)
	{
		add_node(arr[i], &L); // Add a node at the end that represents the i-th element
	}
	return L;
}


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

unsigned len(list L)
{
    unsigned l=0;
    node * temp=L.head;
    while(temp!=NULL)
	{
        l+=1;
		temp=temp->next;
	}

    return l;
}

char * listArray(list L)
{
    unsigned length = len(L);
    char *array = (char *)malloc(length * sizeof(char));
    node * temp = L.head;
    for(int i=0; i<length;i++)
    {
        array[i] = temp->data;
        temp = temp->next;
    }
    return array;
}

void palindrome_array(list L)
{
	unsigned l = len(L);
	if(L.head == NULL)
	{
		printf("The string is empty.\n");
		return ;
	}
	if(l == 1)
	{
		printf("This string is a palindrome.\n");
		return ;
	}
	char * array = listArray(L);
	for(int i=0; i<l; i++)
	{
		printf("%d, %d \n", i, l-i-1);
		if (array[i] != array[l-i-1] && i != l-i-1)
		{
			printf("This string isn't a palindrome.\n");
			return ;
		}
	}
	printf("This string is a palindrome.\n");
}

void palindrome_list(list L)
{
	unsigned l = len(L);
	if(L.head == NULL)
	{
		printf("The string is empty.\n");
		return ;
	}
	if(l == 1)
	{
		printf("This string is a palindrome.\n");
		return ;
	}
	node * temp_next = L.head;
	node * temp_previous = L.last;
	int i = 0, j = 4;
	while(temp_next != temp_previous)
	{
		if(temp_next->data != temp_previous->data)
		{
			printf("This string isn't a palindrome.\n");
			return ;
		}
		temp_next = temp_next->next;
		temp_previous = temp_previous->previous;
		i++;
		j--;
	}
	printf("This string is a palindrome.\n");
}

int main(int ac, char **av)
{
	i = 0;
	if(ac >= 2)
	{
		char * string = av[1];
		list L = string_to_list(strlen(string), string);
		print_list(L);
		palindrome_list(L);
	}
	return 0;
}
