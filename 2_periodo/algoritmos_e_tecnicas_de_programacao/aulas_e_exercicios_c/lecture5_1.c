#include <stdio.h>

int main() {
  float numbers[10];
  float sum = 0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um número [%d/10] ", i + 1);
    scanf("%f", &numbers[i]);
    sum += numbers[i];
  };

  printf("A soma total eh: %f\n", sum);
  printf("A media aritmetica total dos numeros eh: %f\n", sum / 10);

  return 0;
}
