#include <stdio.h>

// Protótipo das funções
void exibirMenu();
void realizarAcao(int escolha);

int main() {
    int escolha;

    do {
        exibirMenu();
        scanf("%d", &escolha);

        realizarAcao(escolha);
    
    } while (escolha != 0);
    
    return 0;
}

// Função para exibir o menu
void exibirMenu() {
    printf("\n----- Menu -----\n");
    printf("1. Realizar Tarefa 1\n");
    printf("2. Realizar Tarefa 2\n");
    printf("3. Realizar Tarefa 3\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

// Função para realizar ações com base na escolha do usuário
void realizarAcao(int escolha) {
    switch (escolha) {
        case 1:
            printf("\nRealizando Tarefa 1. \n\n");
            // Lógica para Tarefa 1
            break;
        case 2:
             printf("\nRealizando Tarefa 2. \n\n");
            // Lógica para Tarefa 2
            break;
        case 3:
             printf("\nRealizando Tarefa 3. \n\n");
            // Lógica para Tarefa 3
            break;
        case 0:
         printf("\nSaindo do programa. Adeus!.\n\n");
            break;
        default:
            printf("\nOpção Inválida. Tente Novamente.\n\n");
    }
}