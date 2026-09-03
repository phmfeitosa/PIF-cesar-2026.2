#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    const float PI = 3.141593;

    printf("Informe o valor do RAIO: ");
    scanf("%f", &raio);

    printf("ÁREA DA ESFERA: %.4f\n", 4 * PI * pow(raio, 2));
    printf("VOLUME: %.4f\n", 4 / 3.0 * PI * pow(raio, 3));

    return 0;
}