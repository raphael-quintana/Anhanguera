/* Escreva um algoritmo que receba dois valores X e Z 
e calcula e retorna X^Z (sem utilizar funções ou 
operadores de potência prontos.)*/

#include <stdio.h>


int main() {
    int x, z;
    long int res = 1;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Z: ");
    scanf("%d", &z);


    //Como está sendo utilizada dentro do loop for, a variável i
    //somente existirá dentro desse loop, sendo eliminada assim que 
    //o loop terminar

    for(int i = 0; i < z; i++){
        res = res * x;
    
    }

    printf("%d elevado a %d é igual a %ld\n", x, z, res);

    return 0;
}