#include <stdio.h>

int main() {
    int k= 5;
    int *p = &k;
    int **m = &p;
    **m = 6;
    printf("%d\n", k);
    return 0;
}