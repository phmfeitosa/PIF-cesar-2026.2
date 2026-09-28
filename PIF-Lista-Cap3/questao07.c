#include <stdio.h>

int main() {
    int inicio = 0, fim = 100;

    for (int i = inicio; i <= fim; i++) {
        printf("Contando... %d\n", i);
    }

    while (inicio <= fim) {
        printf("Contando... %d\n", inicio);
        inicio++;
    }

    do {
        printf("Contando... %d\n", inicio);
        inicio++;
    } while (inicio <= fim);

    return 0; 
}