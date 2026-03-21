#include <stdio.h>

/*Solicitando ao usuário os três numeros inteiros separadamente*/

int main() {
    
    int x, y, z;

     printf("Digite o primeiro número inteiro: ");
     scanf("%d", &x);

     printf("Digite o segundo número inteiro: ");
     scanf("%d", &y);
     
     printf("Digite o terceiro número inteiro: ");
     scanf("%d", &z);


     //Definindo as variáveis referentes aos calculos de soma, subtração, multiplicação e divisão
     // dos três números.

     int a = x + y + z;
     int b = x - y - z;
     int c = a * b * c;
     int d = a / b / c;

     printf("\nO resultado da soma dos números é %d.\n", a);








    
    return 0;

}