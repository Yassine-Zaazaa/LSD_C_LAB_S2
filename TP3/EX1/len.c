#include"header.h"

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
