#include"header.h"

void print(point p, char**arr)
{
	for(int i=0; i<p.x; i++)
	{
		printf("\n");
		for(int j=0; j<p.y; j++)
		{
			printf("%c", arr[i][j]);
		}
	}
	printf("\n");
}
