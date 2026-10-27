#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    printf("Digite um numero para ser analisado: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("Raiz Quadrada do Numero: %.2f.\n", sqrt(numero));
    } else {
        printf("Potencia Quadratica do Numero: %.2f.\n", pow(numero, 2.0));
    }

    return 0;
}