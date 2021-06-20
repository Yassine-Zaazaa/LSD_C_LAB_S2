#include "header.h"

void rand_fill_table(int *T, int n) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        T[i] = 1 + rand() % 100;
    }
}