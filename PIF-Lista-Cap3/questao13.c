#include <stdio.h>

int main() {
    int numero;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("Fatorial do Numero %d e igual a %lld.", numero, fatorial);
    return 0;
}