#include "header.c"

int iterative_fibo(int n)
{
<<<<<<< HEAD
      int TAB[n+2];
  	int i;
 	TAB[0] = 0;
	TAB[1] = 1;
 
	for (i = 2; i <= n; i++)
      	TAB[i] = TAB[i-1] + TAB[i-2];
  	return TAB[n];
=======
  int TAB[n+2];
  int i;
  TAB[0] = 0;
  TAB[1] = 1;
 
  for (i = 2; i <= n; i++)
      TAB[i] = TAB[i-1] + TAB[i-2];
  return TAB[n];
>>>>>>> 580cac0762b7aa9b1d1c30545e3416d186090eae
}
