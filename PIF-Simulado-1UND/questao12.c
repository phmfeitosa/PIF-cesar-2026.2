#include <stdio.h>

int main() {
    float nota;

    printf("Informe uma nota válida entre 0 e 10: ");
    scanf("%f", &nota);

    do {
        printf("ERRO! Nota informada não é válida. Por favor, informe uma nota válida entre 0 e 10: ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);

    return 0;
}