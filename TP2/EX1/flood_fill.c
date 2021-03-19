#include"header.h"

void flood_fill(char **arr, point pos, point dim, char new, char old)
{
	if(pos.x >= 0 && pos.x <dim.x && pos.y < dim.y && pos.y >= 0 && arr[pos.x][pos.y] != new)
	{
		if(arr[pos.x][pos.y] == old)
		{
			arr[pos.x][pos.y] = new;
			flood_fill(arr, (point){pos.x + 1, pos.y}, dim, new, old);
			flood_fill(arr, (point){pos.x - 1, pos.y}, dim, new, old);
			flood_fill(arr, (point){pos.x, pos.y + 1}, dim, new, old);
			flood_fill(arr, (point){pos.x, pos.y - 1}, dim, new, old);
		}
	}
}
