#include <stdio.h>

int main() {

    int x, y;

    x = 10; y = x++;
    printf("y = x++ : valor de y => %d\n", y);
    printf("y = x++ : valor de x => %d\n\n", x);

    x = 10; y = x--;
    printf("y = x-- : valor de y => %d\n", y);
    printf("y = x-- : valor de x => %d\n\n", x);

    x = 10; y = ++x;
    printf("y = ++x : valor de y => %d\n", y);
    printf("y = ++x : valor de x => %d\n\n", x);

    x = 10; y = --x;
    printf("y = --x : valor de y => %d\n", y);
    printf("y = --x : valor de x => %d\n\n", x);

    printf("%d\n\n", 4 > 10);

    return 0;

}


