#include <stdio.h>

int somar(int valor) {
    if (valor != 0) {
        return valor + somar(valor-1);
    } else {
        return valor;
    }
}

int main() {
    printf("Resultado = %d", somar(6));
    
    return 0;
}