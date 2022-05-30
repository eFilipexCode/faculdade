#include <stdio.h>

int sum(int x, int y) { return x > y ? y : x; };

int main() {
    int a, b;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro qualquer: ");
    scanf("%d", &b);

    printf("O menor numero eh: %d\n", sum(a, b));
    return 0;
}
