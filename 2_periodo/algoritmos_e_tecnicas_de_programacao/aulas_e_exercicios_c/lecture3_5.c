#include <stdio.h>

void main() {
    int value;

    printf("Digite algum valor: ");
    scanf("%d", &value);

    if (value % 2 == 0)
        return printf("%d eh par.", value);

    return printf("%d eh impar.", value);
}

