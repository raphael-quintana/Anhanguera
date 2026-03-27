#include <stdio.h>

/*Começando declarando o vetor com 5 posições (0 até 4), e uma variável que vai
guardar a soma dos valoes diários de vendas.*/ 

int main () {
    int vendas[5], somaVendaSemana = 0;

    /*Aqui temos o primeiro laço for, feito para que o usuário o preencha com o valor 
    total de vendas do dia, salve em cada posição correspondente no vetor, e some
    o valor na variável somaVendaSemana.*/
    
    for (int i = 0; i < 5; i++) {
        printf("Digite seu total de vendas de hoje: \n");
        scanf("%d", &vendas[i]);
        somaVendaSemana += vendas[i]; 
    }

    /*Aqui temos o inicio do relatório semanal de vendas, que utiliza o laço for para
    imprimir todas as variáveis do vetor vendas no formato de lista*/

    printf("\n\nRelatório Semanal de Vendas\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Dia %d: %d reais.\n", i + 1, vendas[i]);
    }
    
    /*Finalizando o relatório semanal com o valor total de vendas feitas durante a
    semana.*/

    printf("\nO Total de vendas da semana foi de %d reais!\n\n", somaVendaSemana);

    return 0;
}