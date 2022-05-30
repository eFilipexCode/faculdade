#include <stdio.h>

int main() {
    int value;
    printf("Digite um valor: ");
    scanf("%d", &value);

    if (value >= 0)
        return printf("%d", value);

    value += -(2 * value);
    return printf("%d", value);
}
