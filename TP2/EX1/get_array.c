#include"header.h"

char **get_array(point p)
{
	char**arr = malloc(p.x * sizeof(char*));
	for(int i=0; i<p.x; i++)
		arr[i] = malloc(p.y * sizeof(char));
	return arr;
}
