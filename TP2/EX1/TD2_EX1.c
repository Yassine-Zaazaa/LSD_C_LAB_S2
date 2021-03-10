#include<stdio.h>
#include<stdlib.h>

struct t_point
{
	int x;
	int y;
};
typedef struct t_point point;

void scan_point(point *p)
{
	scanf("%d%d", &p->x, &p->y);
}

char **get_array(point p)
{
	char**arr = malloc(p.x * sizeof(char*));
	for(int i=0; i<p.x; i++)
		arr[i] = malloc(p.y * sizeof(char));
	return arr;
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

void flood_fill(char **arr, point pos, point dim, char new)
{
	if(pos.x >= 0 && pos.x <dim.x && pos.y < dim.y && pos.y >= 0 && arr[pos.x][pos.y] != new)
	{
		arr[pos.x][pos.y] = new;
		printf("Enter with (%d,%d)", pos.x, pos.y);
			flood_fill(arr, (point){pos.x + 1, pos.y}, dim, new);
			flood_fill(arr, (point){pos.x - 1, pos.y}, dim, new);
			flood_fill(arr, (point){pos.x, pos.y + 1}, dim, new);
			flood_fill(arr, (point){pos.x, pos.y - 1}, dim, new);
	}
}

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
	flood_fill(array, position, dimension, new);
	print(dimension, array);
	return 0;

}
