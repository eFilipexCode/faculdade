#include <stdio.h>

void main() {
    float precoEtiqueta;
    int codPagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &precoEtiqueta);

    printf("Digite o codigo do meio de pagamento: ");
    scanf("%d", &codPagamento);

    float valorFinal = precoEtiqueta;
    if (codPagamento == 1) {
        valorFinal = valorFinal * 0.9;
    } else if (codPagamento == 2) {
        valorFinal = valorFinal * 0.95;
    } else if (codPagamento == 4) {
        valorFinal = valorFinal * 1.10;
    }

    printf("O valor final da compra eh %f\n", valorFinal);
}
