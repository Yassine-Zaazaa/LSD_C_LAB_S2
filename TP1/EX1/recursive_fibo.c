#include "header.c"

int recursive_fibo(int n)
{
	if(n == 0)
      	return 0;
	if(n == 1)
      	return 1;
      return (recursive_fibo(n-1) + recursive_fibo(n-2));
}
