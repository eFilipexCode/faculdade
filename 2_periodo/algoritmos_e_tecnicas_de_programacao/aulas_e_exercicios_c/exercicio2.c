#include <stdio.h>

void main() {
    float n1, n2, n3, n4;

    printf("Digite um valor: ");
    scanf("%f", &n1);

    printf("Digite um valor: ");
    scanf("%f", &n2);

    printf("Digite um valor: ");
    scanf("%f", &n3);

    printf("Digite um valor: ");
    scanf("%f", &n4);

    float media = (n1 + n2 + n3 + n4) / 4;

    printf("A media dos valores eh: %.2f", media);
}
;
