#include <stdio.h>

int main() {
    int anoNasc;
    int anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    int idade = anoAtual - anoNasc;
    if (idade >= 16) {
        printf("Voce ja pode votar!\n");
        if (idade >= 18) {
            printf("Voce ja pode dirigir!\n");
        }
        return 0;
    }
    printf("Voce nao pode votar nem dirigir.");
}
