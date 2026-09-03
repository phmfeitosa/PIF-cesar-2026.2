#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número INTEIRO: ");
    scanf("%d", &numero);

    printf("O QUADRADO do número digitado é: %d\n", numero * numero);
    printf("A DÉCIMA PARTE do número digitado é: %.2f", numero / 10.0);

    return 0;
}