#include <stdio.h>

int fatorial(int n) {
    int res = 1;
    
    if (n == 0)
        return 1;
    else {
        for (int i = n; i > 1; i--) {
            res = res * i;
        }
    }    
    
    
    return res;

}

int main() {
    int numero, res;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Numero negativo!");
    else
        printf("Resultado = %d", fatorial(numero));

    return 0;
}
