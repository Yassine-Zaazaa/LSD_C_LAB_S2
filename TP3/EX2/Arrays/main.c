#include "header.h"

int main()
{
	printf("Here is the first array: \n\t L = ");
	array L = rand_fill_array(20);
	print_array(L);
	printf("Here is the second array: \n\t R = ");
	array R = rand_fill_array(15);
	print_array(R);
	printf("We sort the first and the second arrays \"L\" and \"R\"\n\t L = ");
	sort_array(&L);
	print_array(L);
	printf("\t R = ");
	sort_array(&R);
	print_array(R);
	printf("We merge the arrays \"L\" and \"R\" in the array \"P\" and then sort it.\n\t P = ");
	array P = merge_arrays(L, R);
	sort_array(&P);
	print_array(P);
	printf("We then remove the duplicates from the array \"P\"\n\t P = ");
	array Q = remove_duplicates(P);
	print_array(Q);
	return 0;
}
