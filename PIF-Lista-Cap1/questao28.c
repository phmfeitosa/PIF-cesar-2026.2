#include <stdio.h>

int main() 
{
    double num1, num2, num3, media;
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("\nDigite o segundo número: ");
    scanf("%lf", &num2);
    printf("\nDigite o terceiro número: ");
    scanf("%lf", &num3);

    media = (num1 + num2 + num3) / 3;
    printf("\nA média aritmética dos três números é: %.2lf", media);
    return 0;
}