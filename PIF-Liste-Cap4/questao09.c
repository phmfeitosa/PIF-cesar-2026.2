#include <stdio.h>

int main() {
    float laboratorio, avaliacao, final, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &laboratorio);
    while (laboratorio < 0.0 || laboratorio > 10.0) {
        printf("Nota Invalida! Digite a nota do Trabalho de Laboratorio: ");
        scanf("%f", &laboratorio);
    }
    
    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &avaliacao);
    while (avaliacao < 0.0 || avaliacao > 10.0) {
        printf("Nota Invalida! Digite a nota da Avaliacao Semestral: ");
        scanf("%f", &avaliacao);
    }

    printf("Digite a nota do Exame Final: ");
    scanf("%f", &final);
    while (final < 0.0 || final > 10.0) {
        printf("Nota Invalida! Digite a nota do Exame Final: ");
        scanf("%f", &final);
    }

    media = ((laboratorio * 2) + (avaliacao * 3) + (final * 5)) / 10.0;

    if (media < 3.0) {
        printf("Reprovado.");
    } else if (3.0 <= media && media < 5.0) {
        printf("Em Recuperacao.");
    } else {
        printf("Aprovado.");
    }

    return 0;
}