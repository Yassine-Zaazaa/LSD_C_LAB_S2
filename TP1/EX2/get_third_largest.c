#include "header.h"

int get_third_largest(int *T, int n) {
    int first = 0;
    int second = 0;
    int third = 0;
    for(int i = 0; i < n; i++) {
        if(T[i] > first) {
            third = second;
            second = first;
            first = T[i];
        }
        if(T[i] < first && T[i] > second) {
            third = second;
            second = T[i];
        } 
        if(T[i] < second && T[i] > third) { 
            third = T[i];
        }
   }
   return third;
}