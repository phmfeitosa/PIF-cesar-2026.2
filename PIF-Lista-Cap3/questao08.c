#include <stdio.h>

int main() {
    float nota;

    printf("Digite uma nota de 0 a 10: ");
    scanf("%f", &nota);

    do {
        printf("Nota Inválida! Digite uma nota de 0 a 10: ");
        scanf("%f", &nota); 
    } while (nota < 0 || nota > 10);

    printf("Nota registrada com sucesso!");

    return 0;
}