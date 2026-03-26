#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    (*ptr) += 8;

    printf("O valor de x é: %d\n", x);

    return 0;
    
}