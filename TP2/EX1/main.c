#include "header.h"

int main()
{
	point dimension;
	printf("Enter the dimension of the array: \n");
	scan_point(&dimension);
	char **array = get_array(dimension);
	printf("Enter the characters for the array: \n");
	scan_array(dimension, array);
	print(dimension, array);
	point position;
	printf("Enter the position to apply flood fill: \n");
	scan_point(&position);
	printf("Enter the character to fill with: \n");
	char new;
	scanf(" %c", &new);
	flood_fill(array, position, dimension, new, array[position.x][position.y]);
	print(dimension, array);
	return 0;
}
