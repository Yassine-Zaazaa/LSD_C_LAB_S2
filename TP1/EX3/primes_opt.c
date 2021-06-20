#include "header.h"

int is_prime_opt(int n) {
    if(n == 0 || n==1)
        return 0;
    for(int i = 2; i<=sqrt(abs(n)); i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

void get_primes_opt(int n) {
    printf("[2, ");
    for(int i = 3; i < n; i++) {
        if(i % 2 != 0) {
            if(is_prime_opt(i) == 1)
                printf("%d, ", i);
        }
    }
    printf("]\n");
}