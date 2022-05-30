#include <stdio.h>

int main() {
    int value;

    printf("Digite qualquer valor: \n");
    scanf("%f", &value);

   if (value != 0) {
    if (value > 0)
        printf("Valor positivo");
    else
        printf("Valor negativo");
    return 0;
   }

    printf("O valor eh nulo");
    return 0;
}
