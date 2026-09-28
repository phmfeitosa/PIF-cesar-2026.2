#include <stdio.h>

int main() {
    float numero, soma = 0;
    int contador = 0;

    while (numero >= 0) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        soma += numero;
        contador++;
    }

    printf("Quantidade de Valores Digitados = %d.\n", contador);
    printf("Soma Total dos Valores Digitados = %.2f.\n", soma);
    printf("Media Aritmetica dos Valores Digitados = %.2f.\n", (soma / (float)(contador)));

    return 0;
}