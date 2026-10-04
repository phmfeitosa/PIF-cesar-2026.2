#include <stdio.h>

int main() {
    int termo, linhas = 1;

    printf("Digite um numero para limitar o numero de colunas: ");
    scanf("%d", &termo);

    for (int i = 1; i <= termo; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", linhas);
            linhas++;
        }
        printf("\n");
    }

    return 0;
}