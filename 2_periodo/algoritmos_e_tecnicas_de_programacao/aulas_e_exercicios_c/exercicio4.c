#include <stdio.h>

void main() {
    float qntDolars;
    float cotacaoDolar;

    printf("Digite a cotacao do dolar de hoje: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite o valor em dolar: ");
    scanf("%f", &qntDolars);

    printf("O valor de %f dolares em reais eh %f", qntDolars, (qntDolars * cotacaoDolar));

}
