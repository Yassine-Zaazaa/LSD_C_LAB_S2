#include"header.h"

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
