#include <stdio.h>

// Solicitando o número e informando que vamos fazer a soma, ou para digitar
//zero para sair.

int main() {
    int entrada, soma = 0, contDigitosSomados = 0;

    printf("Digite um número que vou somando para você, ou 0 para sair.\n");
    scanf("%d", &entrada);
    
    //Laço while de repetição (teste no início), adicionando acumulador e
    //contador.

    while (entrada != 0) {   

        if (entrada > 0) {
            soma += entrada;
            contDigitosSomados++;
        } 
        
        //Breve tratamento de erros para evitar números negativos.

        else {
            printf("Não somo com negativos :( Tente novamente!\n");
        }      

        //Preparação para o próximo loop.

        printf("Pode digitar o próximo, ou 0 para sair.\n");    
        scanf("%d", &entrada);

    }

//Resultado da soma total, e contagem de quantos números foram digitados.

printf("\nA soma de todos os números foi %d, você digitou %d números. \n\n",
         soma, contDigitosSomados);

return 0;

}
