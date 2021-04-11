#include "header.h"

list merge_lists(list L, list R)
{
	list P = NULL;
	list tempL = L;
	list tempR = R;
	while(tempL != NULL)
	{
		add_node(tempL->data, &P);
		tempL = tempL->next;
	}
	while(tempR != NULL)
	{
		add_node(tempR->data, &P);
		tempR = tempR->next;
	}
	return P;
}
