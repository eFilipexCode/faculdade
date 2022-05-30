#include <stdio.h>

int main() {
  int numbers[10];
  float sum = 0;
  float sumEven = 0;
  int qtdEven = 0;
  int lowest;
  int highest = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um numero [%d/10]: ", i + 1);
    scanf("%d", &numbers[i]);
    sum += numbers[i];
    if (numbers[i] > highest) highest = numbers[i];
    if (numbers[i] < lowest) lowest = numbers[i];
    if (numbers[i] % 2 == 0) {
        sumEven += numbers[i];
        qtdEven++;
    }
  };

  printf("A soma total dos numeros eh: %f\n", sum);
  printf("A media aritmetica total dos numeros eh: %.2f\n", sum / 10);
  printf("A media aritmetica total dos numeros pares eh: %.2f\n", sumEven / qtdEven);
  printf("O maior numero digitado foi: %d\n", highest);
  printf("O menor numero digitado foi: %d\n", lowest);

  return 0;
}
