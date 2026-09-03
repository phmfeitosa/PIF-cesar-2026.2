#include <stdio.h>

int main() {
    int diasTrabalhados;

    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    printf("SALÁRIO BRUTO: %d", 30 * diasTrabalhados);
    printf("VALOR LÍQUIDO: %.2f", 30 * diasTrabalhados - 30 * 0.08 * diasTrabalhados);

    return 0; 
}