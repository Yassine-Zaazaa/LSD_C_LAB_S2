#include "header.h"

int is_prime(int n) {
    if(n == 0 || n==1)
        return 0;
    for(int i = 2; i<abs(n); i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

void get_primes(int n) {
    printf("[");
    for(int i = 2; i < n; i++) {
        if(is_prime(i) == 1)
            printf("%d, ", i);
    }
    printf("]\n");
}
