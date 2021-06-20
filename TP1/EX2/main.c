#include "header.h"


int main() {
    int T[10];
    rand_fill_table(T, 10);
    print_table(T, 10);
    printf("The third largest number in this table is : %d\n", get_third_largest(T, 10));
    return 0;
}