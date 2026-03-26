#include <stdio.h>

void main() {
    float matriz[2][2];
    int i,j,resultado = 0;
    for(i = 0; i<2; i++) {
        for(j=0; j<2; j++){
            matriz[i][j] = i + j;
            resultado = resultado + matriz[i][j];

        }   
    }

    printf("\n Resultado = %d", resultado);
    
}