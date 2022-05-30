#include <stdio.h>

int main() {
  int numbers[10];
  float sum = 0;
  int qtdEven = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um número [%d/10]: ", i + 1);
    scanf("%d", &numbers[i]);
    if (numbers[i] % 2 == 0) {
        sum += numbers[i];
        qtdEven++;
    }
  };

  printf("A soma total dos pares eh: %f\n", sum);
  printf("A media aritmetica total dos numeros pares eh: %f\n", sum / qtdEven);

  return 0;
}
