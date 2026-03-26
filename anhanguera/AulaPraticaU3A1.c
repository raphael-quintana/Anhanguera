#include <stdio.h>

int main () {
    int vendas[5], somaVendaSemana = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite seu total de vendas de hoje: \n");
        scanf("%d", &vendas[i]);
        somaVendaSemana += vendas[i]; 
    }

    printf("\n\nRelatório Semanal de Vendas\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Dia %d: %d reais.\n", i + 1, vendas[i]);
    }
    
    printf("\nO Total de vendas da semana foi de %d reais!\n\n", somaVendaSemana);

    return 0;
}