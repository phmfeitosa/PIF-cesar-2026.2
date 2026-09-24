#include <stdio.h>

int main() {
    int numero;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else if (numero == 0) {
        printf("O fatorial de 0 é 1 (0! = 1).\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("Numero fatorial: %d! = %lld\n", numero, fatorial);
    }

    return 0;
}
