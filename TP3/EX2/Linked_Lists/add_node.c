#include "header.h"

void add_node(int x,list * L)
{
    node * C=(node *)malloc(sizeof(node));

    C->data=x;
    C->next=NULL;
    C->previous = NULL;
    if(*L==NULL)
        *L=C;
    else
    {
        list temp=*L;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=C;
        C->previous = temp;
    }
    return;
}
