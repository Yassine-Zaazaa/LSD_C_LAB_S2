#include<stdio.h>
#include<stdlib.h>

	// Data structure : List

struct node
{
	int data;
	struct node * next;
};
typedef struct node node;
typedef struct node * list;

// Functions
list create_node(int);
void add_node(int, list);
list array_to_list(int, int[]);
void print_list(list);
void remove_node(list *, int);

list create_node(int data)
{
	list new = (node *)malloc(sizeof(node)); // Allocate a node
	new->data = data; // Put the data in the node
	new->next = NULL;
	return new;
}

void add_node(int data, list L)
{
	list last = L;	// Used in line 38
	list new = create_node(data); // Create the new node
	if(L = NULL) // Check if the list is empty
	{
		L = new; // Make the new node as the list
		return ;
	}
	while(last->next != NULL)
		last = last->next; // Traverse the list
	last->next = new;
	return ;
}

list array_to_list(int size, int arr[])
{
	list L = create_node(arr[0]); // Create a node with the first element of the array
	for(int i=1; i < size; i++)
	{
		add_node(arr[i], L); // Add a node at the end that represents the i-th element
	}
	return L;
}

void print_list(list L)
{
	if(L == NULL)
		printf("[]");
	else
	{
		printf("[");
		list last = L; // temporary list to go the last node
		while(last->next != NULL)
		{
			printf("%d, ", last->data);
			last = last->next;
		}
		if(last!=NULL)
			printf("%d", last->data);
		printf("]\n");
	}
}

void remove_node(list *L, int index)
{
	list temp = *L;
	unsigned l=0;
    if(*L!=NULL)
    {
        list temp=*L;
        while(temp!=NULL)
        {
            l+=1;
            temp=temp->next;
        }
    }
	if(index==0)
	{
		if(*L!=NULL)
		{
			list temp=*L;
			*L=(*L)->next;
			free(temp);
	}
		return;
	}
	else
	{
		list temp1 = *L;
        unsigned j = 0;
        while(j<index-1)
        {
              temp1 = temp1->next;
              j++;
        }
        list temp2 = temp1;
        temp1= temp1->next;
        temp2->next = temp1->next;
        free(temp1);
        return ;
	}
}

int main()
{
	int data1,data2;
	printf("Enter a number for the first element of the list: \n");
	scanf("%d", &data1);
	list L = create_node(data1);
	printf("Enter a number for the second element of the list: \n");
	scanf("%d", &data2);
	add_node(data2, L);
	print_list(L);
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	list T = array_to_list(10, arr);
	print_list(T);
	remove_node(&T, 3);
	print_list(T);
	return 0;
}
