#include <stdio.h>

int main() {
    int numero, divisores = 0;

    printf("Digite um numero a sua escolha: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        if ((numero % i) == 0) {
            divisores++;
        } 
    }

    if (divisores > 2) {
        printf("Este numero nao e um numero primo. Total de divisores: %d", divisores);
    } else {
        printf("Este numero e um numero primo! Possuindo apenas dois divisores.");
    }

    return 0;
}