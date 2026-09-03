#include <stdio.h>
#include <math.h>

int main() {
    float ladoA, ladoB;

    printf("Informe o valor do PRIMEIRO CATETO: ");
    scanf("%f", &ladoA);
    printf("Informe o valor do SEGUNDO CATETO: ");
    scanf("%f", &ladoB);

    printf("COMPRIMENTO DA HIPOTENUSA: %.4f", sqrt(pow(ladoA, 2) + pow(ladoB, 2)));

    return 0;
}