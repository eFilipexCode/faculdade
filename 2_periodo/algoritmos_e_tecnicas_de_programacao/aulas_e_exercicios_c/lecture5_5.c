#include <stdio.h>

typedef struct {
    int Age;
    float Weight;
    float Height;
} Player;

int main() {
    Player Team[11];
    float sumAge = 0;
    int qPlayersYoungerThan18 = 0;
    float sumHeight = 0;

    for (int i = 0; i < 11; i++) {
        printf("Digite a idade do %dn jogador: ", i + 1);
        scanf("%d", &Team[i].Age);

        printf("Digite o peso do %dn jogador: ", i + 1);
        scanf("%f", &Team[i].Weight);

        printf("Digite a altura do %dn jogador: ", i + 1);
        scanf("%f", &Team[i].Height);

        sumAge += Team[i].Age;
        if (Team[i].Age < 18) qPlayersYoungerThan18++;
        sumHeight += Team[i].Height;
    };

    printf("A quantidade de jogadores menores de idade eh: %d\n", qPlayersYoungerThan18);
    printf("A media da idade dos jogares eh: %.2f\n", sumAge / 11);
    printf("A altura media dos jogares eh: %.2f\n", sumHeight / 11);

    return 0;
}

