#include <stdio.h>

int main() {
    int value;
    printf("Digite um valor qualquer: ");
    scanf("%d", &value);

    if (value % 57 == 0)
        return printf("Sim.");

    return printf("Nao.");
}
