#include <stdio.h>

int main() {
    float diasTrabalhados;

    printf("Informe a quantidade de dias trabalhados por voce: ");
    scanf("%f", &diasTrabalhados);

    printf("O valor líquido recebido será: %.2f", (diasTrabalhados * 45 + (diasTrabalhados * 45 * 0.05) - (diasTrabalhados * 45 * 0.08)));

    return 0;
}