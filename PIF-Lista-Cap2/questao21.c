#include <stdio.h>

int main() {
    char caracter;

    printf("Digite um caracter a sua escolha: ");
    scanf("%c", &caracter);

    printf("Caracter digitado convertido para NUMERAL INTEIRO: %d", (int)(caracter));

    return 0;
}