#include <stdio.h>

int main() {
    float a, b, c, d, media, ponderada;
    
    printf("Informe o valor da PRIMEIRA NOTA: ");
    scanf("%f", &a);
    printf("Informe o valor da SEGUNDA NOTA: ");
    scanf("%f", &b);
    printf("Informe o valor da TERCEIRA NOTA: ");
    scanf("%f", &c);
    printf("Informe o valor da QUARTA NOTA: ");
    scanf("%f", &d);

    media = (a + b + c + d) / 4;
    printf("MÉDIA ARITMÉTICA GERAL: %.2f\n", media);

    ponderada = (a + b + 2 * c + 2 * d) / 6;
    printf("MÉDIA PONDERADA GERAL: %.2f\n", ponderada);

    return 0;
}