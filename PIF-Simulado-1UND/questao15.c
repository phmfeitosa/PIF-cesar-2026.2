#include <stdio.h>

int main() {
    int numero, linhas = 1;

    printf("Digite um numero inteiro para as determinar a quantidade de linhas do Triângulo de Floyd: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", linhas);
            linhas++;
        }
        printf("\n");
    }
    return 0;
}