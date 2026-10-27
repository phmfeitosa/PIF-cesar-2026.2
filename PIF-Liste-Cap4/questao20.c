#include <stdio.h>
#include <math.h>

int main() {
    float valorA, valorB, valorC, delta;

    printf("Digite o valor de A: ");
    scanf("%f", &valorA);
    while (valorA == 0.0) {
        printf("Erro: Valor de A Invalido! Digite o valor de A: ");
        scanf("%f", &valorA);   
    }
    printf("Digite o valor de B: ");
    scanf("%f", &valorB);
    printf("Digite o valor de C: ");
    scanf("%f", &valorC);

    delta = pow(valorB, 2) - (4 * valorA * valorC);

    if (delta < 0.0) {
        printf("A equacao quadratica nao possui raizes reais.");
    } else if (delta == 0.0) {
        printf("A equacao quadratica possui apenas uma raiz, sendo ela: %.2f.", (((-1) * valorB) / (2 * valorA)));
    } else {
        printf("A equacao quadratica informada possui duas raizes, sendo elas:\n");
        printf("Primeira Raiz: %.2f\n", ((((-1) * valorB) + sqrt(delta)) / (2 * valorA)));
        printf("Segunda Raiz: %.2f\n", ((((-1) * valorB) - sqrt(delta)) / (2 * valorA)));
    }

    return 0;
}