#ifndef HEADER_H
#define HEADER_H

#include<stdio.h>
#include<stdlib.h>


typedef struct t_point
{
	int x;
	int y;
} point;

void print(point p, char**arr);
void scan_point(point *p);
void scan_array(point p, char**arr);
char **get_array(point p);
void flood_fill(char **arr, point pos, point dim, char new, char old);
#endif
