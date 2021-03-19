#include"header.h"

void scan_point(point *p)
{
	scanf("%d%d", &p->x, &p->y);
}

void scan_array(point p, char**arr)
{
	for(int i=0; i<p.x;i++)
	{	for(int j=0; j<p.y;j++)
		{
			scanf(" %c", &arr[i][j]);
		}
	}
}
