#include <stdio.h>
void main() {
    float valorDepositado;
    float taxaDeJuros;

    printf("Digite o valor depositado: ");
    scanf("%f", &valorDepositado);

    printf("Digite a taxa de juros mensal em porcentagem: ");
    scanf("%f", &taxaDeJuros);
    printf("O valor do rendimento ao fim de um mes eh %f", valorDepositado * (taxaDeJuros / 100));
}
