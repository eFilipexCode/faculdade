#include <stdio.h>

int main() {
    int values[10];
    int sumNegatives = 0;

    for (int i = 0; i < 10; i++) {
      printf("Digite um valor: ");
      scanf("%d", &values[i]);

      if (values[i] < 0) sumNegatives += values[i];
    };

    printf("A soma dos numeros negativos eh: %d", sumNegatives);
    return 0;
};
