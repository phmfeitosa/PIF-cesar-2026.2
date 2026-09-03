#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    const float PI = 3.141593;

    printf("Informe o valor do RAIO: ");
    scanf("%f", &raio);

    printf("ÁREA DO CÍRCULO: %.4f\n", PI * pow(raio, 2));
    printf("CIRCUNFERÊNCIA: %.4f\n", 2 * PI * raio);

    return 0;
}