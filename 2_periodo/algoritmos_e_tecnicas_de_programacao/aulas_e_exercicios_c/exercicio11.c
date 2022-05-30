#include <stdio.h>

void main() {
    int value1, value2;
    char operacaoDesejada;

    printf("Digite a operacao desejada: ");
    scanf("%c", &operacaoDesejada);
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &value1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &value2);

    int valorFinal;
    if (operacaoDesejada == '+')
        valorFinal = value1 + value2;
    else if (operacaoDesejada == '-')
        valorFinal = value1 - value2;
    else if (operacaoDesejada == '/')
        valorFinal = value1 / value2;
    else
        valorFinal = value1 * value2;

    printf("O valor final eh: %d", valorFinal);
}
