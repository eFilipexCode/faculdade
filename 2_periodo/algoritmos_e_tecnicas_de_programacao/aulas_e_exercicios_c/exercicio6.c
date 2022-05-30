#include <stdio.h>

void main() {
    float salarioMinimo;
    float kwConsumido;

    printf("Digite o valor do salario minimo atual: ");
    scanf("%f", &salarioMinimo);

    printf("Digite a quantidade de kw consumida: ");
    scanf("%f", &kwConsumido);

    float custoKw = salarioMinimo / 5;

    printf("O custo de cada kw eh: %f\n", custoKw);
    printf("Essa residencia deve pagar %f\n", custoKw * kwConsumido);
    printf("O custo com 15 porcento de desconto eh: %.2f\n", (custoKw * kwConsumido) * 0.85);
}
