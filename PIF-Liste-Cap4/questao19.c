#include <stdio.h>

int main() {
    float ladoA, ladoB, ladoC;
    
    printf("Digite o valor do Lado A: ");
    scanf("%f", &ladoA);
    while (ladoA < 0.0) {
        printf("Erro: Lado Negativo! Digite o valor do Lado A: ");
        scanf("%f", &ladoA);
    }

    printf("Digite o valor do Lado B: ");
    scanf("%f", &ladoB);
    while (ladoB < 0.0) {
        printf("Erro: Lado Negativo! Digite o valor do Lado B: ");
        scanf("%f", &ladoB);
    }

    printf("Digite o valor do Lado C: ");
    scanf("%f", &ladoC);
    while (ladoC < 0.0) {
        printf("Erro: Lado Negativo! Digite o valor do Lado C: ");
        scanf("%f", &ladoC);
    }

    if ((ladoA < ladoB + ladoC) && (ladoB < ladoA + ladoC) && (ladoC < ladoB + ladoA)) {
        if (ladoA == ladoB && ladoA == ladoC && ladoB == ladoC) {
            printf("O triangulo formado com os valores destes lados e um TRIANGULO EQUILATERO, tendo todos os seus lados com valores iguais.");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("O triangulo formado com os valores destes lados e um TRIANGULO ISOSCELES, tendo pelo menos dois lados com valores iguais.");
        } else {
            printf("O triangulo formado com os valores destes lados e um TRIANGULO ESCALENO, tendo todos os seus lados com valores diferentes.");
        }
    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!");
    }

    return 0;
}