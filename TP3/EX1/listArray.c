#include"header.h"

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
