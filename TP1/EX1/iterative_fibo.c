#include "header.c"

int iterative_fibo(int n)
{
  int TAB[n+2];
  int i;
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];
  return f[n];
}
