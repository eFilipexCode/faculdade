#include <stdio.h>

float convertCelsiusToFahrenheit(float celsius) {
    return (9 * celsius + 160) / 5;
}

void main() {
    printf("Digite o valor dos graus C: ");
    float celsiusDegrees;
    scanf("%f", &celsiusDegrees);
    printf("%f" , celsiusDegrees);
    printf("%.2f em graus Fahrenheit sao %.2f", celsiusDegrees, convertCelsiusToFahrenheit(celsiusDegrees));
}
