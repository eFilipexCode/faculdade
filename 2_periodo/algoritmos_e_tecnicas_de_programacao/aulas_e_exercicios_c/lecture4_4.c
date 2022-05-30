#include <stdio.h>
#include <stdbool.h>

int main() {
    int qtdCandidate1 = 0;
    int qtdCandidate2 = 0;
    int qtdCandidate3 = 0;
    int qtdCandidate4 = 0;
    int qtdNull = 0;
    int qtdNeutral = 0;
    int highest = 0;
    int elected;

    while(true) {
        int value;
        printf("Digite o seu voto: ");
        scanf("%d", &value);

        if (value == 0) break;

        switch(value) {
            case 1: qtdCandidate1++;
                    //if (qtdCandidate1 > highest) { highest = qtdCandidate1; elected = 1; };
                    break;
            case 2: qtdCandidate2++;
                    //if (qtdCandidate2 > highest) { highest = qtdCandidate2; elected = 2; };
                    break;
            case 3: qtdCandidate3++;
                    //if (qtdCandidate3 > highest) { highest = qtdCandidate3; elected = 3; };
                    break;
            case 4: qtdCandidate4++;
                    //if (qtdCandidate4 > highest) { highest = qtdCandidate4; elected = 4; };
                    break;
            case 5: qtdNull++;
                    break;
            case 6: qtdNeutral++;
                    break;
        };
    };

    switch(elected) {
        case 1: qtdCandidate1 += qtdNeutral;
                break;
        case 2: qtdCandidate2 += qtdNeutral;
                break;
        case 3: qtdCandidate3 += qtdNeutral;
                break;
        case 4: qtdCandidate4 += qtdNeutral;
                break;
    };

    printf("A quantidade de votos nulos eh: %d\n", qtdNull);
    printf("A quantidade de votos em branco eh: %d\n", qtdNeutral);
    printf("A quantidade de votos do primeiro candidato eh: %d\n", qtdCandidate1);
    printf("A quantidade de votos do segundo candidato eh: %d\n", qtdCandidate2);
    printf("A quantidade de votos do terceiro candidato eh: %d\n", qtdCandidate3);
    printf("A quantidade de votos do quarto candidadto eh: %d\n", qtdCandidate4);
    printf("O candidato vencedor foi o candidato: %d", elected);

};
