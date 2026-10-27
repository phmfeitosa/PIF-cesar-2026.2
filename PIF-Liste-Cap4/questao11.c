#include <stdio.h>

int main() {
    int menor, medio, maior, trocador;

    printf("Digite o primeiro numero para comparar: ");
    scanf("%d", &menor);
    printf("Digite o segundo numero para comparar: ");
    scanf("%d", &medio);
    printf("Digite o terceiro numero para comparar: ");
    scanf("%d", &maior);

    if (menor > medio) {
        trocador = medio;
        medio = menor;
        menor = trocador;
    }

    if (menor > maior) {
        trocador = maior;
        maior = menor;
        menor = trocador;
    }

    if (medio > maior) {
        trocador = maior;
        maior = medio;
        medio = trocador;
    }

    printf("Numero Maior (%d) --- Numero Medio (%d) --- Numero Menor (%d)", maior, medio, menor);

    return 0;
}