#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro para ser verificado: ");
    scanf("%d", &numero);

    if ((numero % 2) != 0 && numero > 0) {
        printf("O numero e IMPAR e POSITIVO!"); 
    } else if ((numero % 2) != 0 && numero == 0) {
        printf("O numero e IMPAR e NULO (zero).");
    } else if ((numero % 2) != 0 && numero < 0) {
        printf("O numero e IMPAR e NEGATIVO!");
    } else if ((numero % 2) == 0 && numero > 0) {
        printf("O numero e PAR e POSITIVO!");
    } else if ((numero % 2) == 0 && numero == 0) {
        printf("O numero e PAR e NULO (zero).");
    } else {
        printf("O numero e PAR e NEGATIVO!");
    }

    return 0;
}