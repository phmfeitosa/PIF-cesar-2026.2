#include <stdio.h>

int main() {
    char letraMaiuscula;

    printf("Digite uma LETRA MAIÚSCULA: ");
    scanf("%c", &letraMaiuscula);

    int letraMinuscula = (int)(letraMaiuscula) + 32;
    printf("Você digitou a letra %c, e a versão minúscula é %c.", letraMaiuscula, (char)(letraMinuscula));

    return 0;
}