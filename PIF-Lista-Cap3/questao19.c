#include <stdio.h>

int main() {
    int numeroLimite, numeroSeguinte, numeroMenor = 1, numeroMaior = 1, numeroContador = 1;

    printf("Digite o numero de termos da Sequencia de Fibonacci: ");
    scanf("%d", &numeroLimite);

    printf("--- Sequencia de Fibonacci ---\n%d\t%d\t", numeroMenor, numeroMaior);
    while (numeroContador < numeroLimite) {
        numeroSeguinte = numeroMenor + numeroMaior;
        numeroMenor = numeroMaior;
        numeroMaior = numeroSeguinte;
        numeroContador++;

        printf("%d\t", numeroSeguinte);
    }

    return 0;
}