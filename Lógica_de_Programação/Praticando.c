#include <stdio.h>

int main() {
    int acumulador = 0;
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 4; j++) {
            // Desafio: Entenda a condição e a precedência
            if (i % 2 != 0 && j % 2 == 0 || i == j) {
                acumulador += (i + j); 
            }
        }
    }

    printf("Resultado final: %d", acumulador);
    return 0;
}

