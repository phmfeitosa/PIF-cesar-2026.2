#include <stdio.h>

int main() {
    int lado;

    printf("Digite um valor para o lado do quadrado (entre 3 e 21): ");
    scanf("%d", &lado);

    while (lado < 3 || lado > 21) {
        printf("Valor Inválido! Digite novamente um valor para o lado do quadrado (entre 3 e 21): ");
        scanf("%d", &lado);
    }

    for (int i = 1; i <= lado; i++) {
        for (int j = 1; j <= lado; j++) {
            if (i == 1 || i == lado || j == 1 || j == lado) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}