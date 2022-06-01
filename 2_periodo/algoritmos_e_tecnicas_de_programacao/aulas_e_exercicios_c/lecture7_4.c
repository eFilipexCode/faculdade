#include <stdio.h>

struct Flight {
    int numFlight;
    char origin[20];
    char destination[20];
};

int main() {
    int qtFlight;

    printf("Digite a quantidade de voos: ");
    scanf("%d", &qtFlight);

    struct Flight flights[qtFlight];

    for (int i = 0; i < qtFlight; i++) {
        printf("Digite o numero do %dn voo: ", i + 1);
        scanf("%d", &flights[i].numFlight);

        printf("Digite o local de origem: ");
        scanf("%s", &flights[i].origin);

        printf("Digite o local de destino: ");
        scanf("%s", &flights[i].destination);
    };

    printf("Lista dos proximos voos:\n");
    printf("NRO_VOO | ORIGEM | DESTINO \n");
    for (int i = 0; i < qtFlight; i++) {
        printf("    %d  | ", flights[i].numFlight);
        printf("    %s  | ", flights[i].origin);
        printf("    %s  |  \n", flights[i].destination);
    };

    return 0;
};
