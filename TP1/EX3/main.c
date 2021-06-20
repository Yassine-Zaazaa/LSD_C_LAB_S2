#include "header.h"

int main() {
    int n;
    clock_t begin, end;

    scanf("%d", &n);

    /* Calling get_prime function */
    begin = clock(); // get the time of begining
    printf("prime numbers using simple prime method:\n");
    get_primes(n);
    end = clock(); // get the time of ending
    printf("Time elpased is %f\n", (double)(end - begin) / CLOCKS_PER_SEC);

    /* Calling get_prime function */
    begin = clock(); // get the time of begining
    printf("prime numbers using optimized prime method:\n");
    get_primes_opt(n);
    end = clock(); // get the time of ending
    printf("Time elpased is %f\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}