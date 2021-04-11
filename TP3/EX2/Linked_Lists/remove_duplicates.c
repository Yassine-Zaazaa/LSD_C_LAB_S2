#include "header.h"

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

unsigned occurence(int x, list L)
{
    list temp = L;
    unsigned occ = 0;
    while(temp!= NULL)
    {
        if(temp->data == x)
            occ++;
        temp = temp->next;
    }
    return occ;
}


void remove_duplicates(list * L)
{
	list temp = *L;
	int i = 0;
	while(temp != NULL)
	{
		if(occurence(temp->data, *L) > 1)
		{
			if (temp->previous == NULL)
				temp = *L;
			else
				temp = temp->previous;
			remove_node(L, i);
			i--;s
		}
		temp = temp->next;
		i++;
	}
}
