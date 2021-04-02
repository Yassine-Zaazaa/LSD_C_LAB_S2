#include"header.h"

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
