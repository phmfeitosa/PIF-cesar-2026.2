#include <stdio.h>

int main() {
    const double PI = 3.141593;
    float angulo;

    printf("Informe um ângulo em GRAUS: ");
    scanf("%f", &angulo);

    printf("Valor em graus convertido para RADIANO: %f\n", angulo * (PI / 180.0));
    
    return 0;
}