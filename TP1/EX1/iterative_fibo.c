#include "header.h"

int iterative_fibo(int n)
{
    int a,b,i,res;
    i = 0;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    a=0;
    b=1;
    while(i<n-1){
        res = a+b;
        a=b;
        b= res;
        i++;
    }
    return res;
      
}
