#include <stdio.h>

//Solicitando ao usuário os três numeros inteiros separadamente

int main() {
    
    int x, y, z;

     printf("Digite o primeiro número inteiro: \n");
     scanf("%d", &x);

     printf("Digite o segundo número inteiro: \n");
     scanf("%d", &y);
     
     printf("Digite o terceiro número inteiro: \n");
     scanf("%d", &z);


     //Definindo as variáveis referentes aos resultados dos cálculos de soma, subtração, 
     //multiplicação e divisão dos três números. Logo após, informando o resultado.

     int a = x + y + z;
        printf("\nO resultado da soma dos números é: %d.", a);

     int b = x - y - z;
        printf("\nO resultado da subtração dos números é: %d.", b);

     int c = x * y * z;
        printf("\nO resultado da multiplicação dos números é: %d.", c);

     int d = x / y / z;
        printf("\nO resultado da divisão dos números é: %d.", d);

    
     //Fazendo a verificação relacional se o primeiro número é maior que o segundo,
     //e, se o segundo é menor que o terceiro.

     printf("\n\nO primeiro número é maior que o segundo?\n");

     if (x > y)  {
        printf("Sim, o primeiro número é maior que o segundo.\n");
     } else if (x == y) {
        printf("O primeiro e o segundo número são iguais.\n");
     } else {
        printf("Não, o primeiro número não é maior que o segundo, e sim menor.\n");
     }

     printf("\n\n");

     printf("O segundo número é menor que o terceiro?\n");

     if (y < z) {
        printf("Sim, o segundo número é menor que o terceiro.\n");
     } else if (y == z) {
        printf("O Segundo e o terceiro número são iguais.\n");
     } else {
        printf("Não, o segundo número não é menor que o terceiro, e sim maior.\n");
     }

     //Avaliando com operadores lógicos se o primeiro número é positivo e o segundo
     //número é par. Exibindo uma palavra secreta caso ambas as condições sejam
     //verdadeiras.

     printf("\n\n");

     if (x >= 0 && y % 2 == 0) {
        printf("O primeiro número é positivo e o segundo é par! A palavra-chave é *variável* !!!\n");
        } else if (x >= 0) {
            printf("O Primeiro número é positivo! Falta uma condição para a palavra-chave.\n");   
        } else if (y % 2 == 0) {
            printf("O segundo número é par! Falta uma condição para a palavra-chave.\n");
        } else {
            printf("Nenhuma condição atendida para palavra-chave.\n");
        }
    
    
        return 0;

}