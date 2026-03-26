#include <stdio.h>

int main(){
    float altura = 0;  
    
    for (int cliente = 1; cliente <= 20; cliente++) {
          
        printf("\nInforme sua altura, por favor: \n");
        scanf("%f", &altura);  

        if (altura >= 1.70) {
            printf("Você tem acesso VIP!\n");
        }

        else if (altura >= 1.50) {
            printf("Bem vindo!\n");
        }

        else {
            printf("Acesso Negado\n");
        }

    }

    return 0;
    
}