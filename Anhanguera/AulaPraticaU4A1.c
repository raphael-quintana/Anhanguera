#include <stdio.h>

/*Prototipando funções necessárias para o programa.*/

float calcular_salario_bruto(float valorHora, float quantHoras);
float calcular_desconto(float bruto);
float calcular_salario_liquido(float bruto, float desconto);


/*Solicitando o valor da hora, e as horas trabalhadas durante o mês*/

int main(){
    float valorHora, quantHoras;

    printf("Digite o valor da sua hora: \n");
    scanf("%f", &valorHora);

    printf("Agora, digite quantas horas trabalhadas neste mês: \n");
    scanf("%f", &quantHoras);

    /*Iniciando relatório de horas.*/

    printf("\nRelatório de pagamento por horas faturadas:\n\n");

    /*Calculanndo salário bruto, desconto, e líquido*/

    float bruto = calcular_salario_bruto(valorHora, quantHoras);
    printf("Seu salário bruto é de %.2f \n", bruto);

    float desconto = calcular_desconto(bruto);
    printf("Seu desconto foi de %.2f.\n", desconto);

    float liquido = calcular_salario_liquido(bruto, desconto);
    printf("Seu salário líquido é de %.2f.\n", liquido);


    return 0;
}


/* Aqui estão os corpos das funções, calculando salario bruto, o desconto,
e o salario liquido.*/

float calcular_salario_bruto(float valorHora, float quantHoras){
      return valorHora * quantHoras;
}

float calcular_desconto(float bruto) {
    return bruto * 0.09;
}

float calcular_salario_liquido(float bruto, float desconto){
    return bruto - desconto;
}



