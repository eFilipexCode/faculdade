#include <stdio.h>

float calcIMC(float height, char sex) {
        return (sex == 'f' || sex == 'F') ? (62.1 * height) - 44.7 : (72.7 * height) - 58;
};

int main() {
    float height;
    printf("Digite a altura da pessoa: ");
    scanf("%f", &height);

    char sex;
    while (sex != 'm' && sex != 'M' && sex != 'F' && sex != 'f') {
        printf("\nDigite o sexo da pessoa: ");
        scanf("%s", &sex);
    };

    printf("O peso ideal para esta pessoa eh: %.2f\n", calcIMC(height, sex));
    return 0;
};
