#include <stdio.h>

struct Flight {
    int numFlight;
    char origin[50];
    char destination[50];
};

int main() {
    int qtFlight;

    printf("Digite a quantidade de voos: ");
    scanf("%d", &qtFlight);

    struct Flight flights[qtFlight];

    for (int i = 0; i < qtFlight; i++) {
        printf("Digite o numero do %dn voo: ", i + 1);
        scanf("%d", &flights[i].numFlight);

        char origin[50];
        scanf("%s", &origin);

        char destination[50];
        scanf("%s", &destination);
    };

    printf("Lista dos proximos voos:\n");
    printf("NRO_VOO | ORIGEM | DESTINO \n");
    for (int i = 0; i < qtFlight; i++) {
        printf("    %d  | ", flights[i].numFlight);
        printf("    %s  | ", flights[i].origin);
    };

    return 0;
};
