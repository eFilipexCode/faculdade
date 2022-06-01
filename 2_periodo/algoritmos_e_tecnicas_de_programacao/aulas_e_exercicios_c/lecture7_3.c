#include <stdio.h>

void readMatrix(int lines, int columns, int matrix[3][3]) {

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            printf("[%d][%d] - Digite um valor qualquer: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        };
    };
};

void scanMatrix(int lines, int columns, int matrix[3][3], int result[3]) {
    int highestValue = 0;
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            if (highestValue < matrix[i][j]) {
                highestValue = matrix[i][j];
                result[0] = highestValue;
                result[1] = i + 1;
                result[2] = j + 1;
            };
        };
    };
};

int main() {
    int highestValue;
    int highestValuePosX;
    int highestValuePosY;

    int values[3][3];
    readMatrix(3,3,values);
    int highestValueData[3]; // Vetor com os dados do maior valor: [valor, linha, coluna]
    scanMatrix(3,3,values,highestValueData);

    printf("\nO maior valor da matriz eh: %d e esta localizado em [%d][%d]", highestValueData[0], highestValueData[1], highestValueData[2]);
};
