#include <stdio.h>

int main() {
    int ano;
    printf("Digite o valor de um ano a partir do ano 1 do calendario romano: ");
    scanf("%d", &ano);

    while (ano <= 0) {
        printf("Ano invalido! Digite o valor de um ano a partir do ano 1 do calendario romano: ");
        scanf("%d", &ano);
    }

    if ((ano % 400) == 0 || (ano % 4) == 0 && (ano % 100) != 0) {
        printf("O ano e bissexto!");
    } else {
        printf("O ano nao e bissexto!");
    }

    return 0;
}