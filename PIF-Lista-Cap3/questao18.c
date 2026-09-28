#include <stdio.h>

int main() {
    int numeroAleatorio, numeroOriginal, numeroInvertido = 0;

    printf("Digite um numero aleatorio: ");
    scanf("%d", &numeroAleatorio);

    numeroOriginal = numeroAleatorio;

    while (numeroAleatorio != 0) {
        numeroInvertido = (numeroInvertido * 10) + (numeroAleatorio % 10);
        numeroAleatorio = numeroAleatorio / 10;
    }

    printf("Numero Original (%d) e sua versao invertida (%d)", numeroOriginal, numeroInvertido);
    
    return 0;
}