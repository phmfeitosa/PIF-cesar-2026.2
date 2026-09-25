#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p;

    printf("Digite o valor para primeiro lado do triangulo: ");
    scanf("%f", &a);
    printf("Digite o valor para segundo lado do triangulo: ");
    scanf("%f", &b);
    printf("Digite o valor para terceiro lado do triangulo: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;

    printf("A Área do Triângulo de lados %.2fU, %.2fU e %.2fU, e de: %.2fU", a, b, c, sqrt(p * (p - a) * (p - b) * (p - c)));

    return 0;
}
