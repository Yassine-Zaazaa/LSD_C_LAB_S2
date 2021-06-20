#include "header.h"

void print_table(int *T, int n) {
    if(n == 0) {
        printf("[]");
        return ;
    }
    printf("[");
    for(int i = 0; i < n-1; i++) {
        printf("%d, ", T[i]);
    }
    printf("%d]\n", T[n-1]);
}