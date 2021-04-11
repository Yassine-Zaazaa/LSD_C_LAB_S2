#include "header.h"

int main()
{
	srand(time(0));
	printf("Here is the first list: \n\t L = ");
	list L = rand_fill_list(10);
	print_list(L);
	printf("Here is the second list: \n\t R = ");
	list R = rand_fill_list(5);
	print_list(R);
	printf("We sort the first and the second lists \"L\" and \"R\"\n\t L = ");
	sort_list(&L);
	print_list(L);
	printf("\t R = ");
	sort_list(&R);
	print_list(R);
	printf("We merge the lists \"L\" and \"R\" in the list \"P\" and then sort it.\n\t P = ");
	list P = merge_lists(L, R);
	sort_list(&P);
	print_list(P);
	printf("We then remove the duplicates from the list \"P\"\n\t P = ");
	remove_duplicates(&P);
	print_list(P);
	return 0;
}
