#include <stdio.h>
#include <math.h>

int main() {
    const float PI = 3.14159265;
    float raio;

    printf("Informe o valor do raio da esfera: ");
    scanf("%f", &raio);

    printf("A area da superficie da esfera de raio %.2fU é: %.3fU", raio, 4 * PI * pow(raio, 2));
    printf("\nO volume da esfera de raio %.2fU é: %.3fU", raio, (4 / 3.0) * PI * pow(raio, 3));

    return 0;
}
