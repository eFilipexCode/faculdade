#include <stdio.h>

int main() {
    int a, b, value;
    printf("Digite um valor qualquer: ");
    scanf("%d", &value);

    printf("\nDigite o primeiro extremo do intervalo: ");
    scanf("%d", &a);

    printf("\nDigite o segundo extremo do intervalo: ");
    scanf("%d", &b);

    if (b < a) {
        int aux = b;
        b = a;
        a = aux;
    }

    printf("Intervalo [%d, %d]\n", a, b);

    if (value < a || value > b)
        return printf("%d estah fora do intervalo [%d, %d]", value, a, b);

    return printf("%d estah dentro do intervalo [%d, %d]", value, a, b);
}
