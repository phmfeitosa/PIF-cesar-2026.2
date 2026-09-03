#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Informe o tamanho do PRIMEIRO lado do triângulo: ");
    scanf("%f", &a);
    printf("Informe o tamanho do SEGUNDO lado do triângulo: ");
    scanf("%f", &b);
    printf("Informe o tamanho do TERCEIRO lado do triângulo: ");
    scanf("%f", &c);
    
    float p = (a + b + c) / 2.0;
    printf("ÁREA DO TRIÂNGULO PELA FÓRMULA DE HERON: %.2f", sqrt(p * (p - a) * (p - b) * (p - c)));

    return 0;
}