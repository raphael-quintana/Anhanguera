#include <stdio.h>
// #include <stdbool.h> quando usar booleanos. Booleanios
//nao sao nativos C.



//Quando usar o define para definir constantes, é interessante
//sempre fazer isso antes do int main.
#define varconst 100; 

int main() {
    int x;
    x = varconst
    
    // scanf("%d", &x); Comentei aqui somente para pular essa parte.
    printf("Hello World! The hell's number is %d", x);

    return 0;
}