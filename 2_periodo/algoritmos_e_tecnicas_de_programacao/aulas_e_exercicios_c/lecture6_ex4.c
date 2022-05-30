#include <stdio.h>


float getGreatestValueFrom2dArray(float(float*)* matriz) {

};

int main() {
    float matriz[3][4];

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 4; j++)   {
        printf("Digite o %dn elemento da %dn linha: ", j + 1, i + 1);
        scanf("%f", &matriz[i][j]);
      };
    };

    printf("\nO maior elemento da matriz eh: %f", getGreatestValueFrom2dArray(matriz));
    return 0;
};
